function github(user){

    var query = `{
        repositoryOwner(login: "${user}"){
            login
            ...on User{
                name
                bio
                avatarUrl
                websiteUrl
                repositories{
                    totalCount
                }
            }
        }
    }`;


     // const api_url = 'https://api.github.com/graphql';
     
       fetch('https://api.github.com/graphql', {


         method: 'POST',                                                          


         headers: {

            'Accept': 'application/json',
            'Content-Type': 'application/json',
          'Authorization': 'bearer  ######################'     //developerss token inserion here
         },

         body: JSON.stringify({
            query
              })
        }).then(response => {


            
        return  response.json();

            
        }).then(data => {

            console.log(data.data);

            if(data.data.repositoryOwner==null){

                //console.alert("no user found")
            }

            

            document.getElementById('profile-name').textContent = "Name :" + data.data.repositoryOwner.name;
            document.getElementById('profile-username').textContent = "Username :" + data.data.repositoryOwner.login;
            document.getElementById('profile-bio').textContent = "Bio :" + data.data.repositoryOwner.bio


            document.getElementById('profile-repocount').textContent = "Count :" + data.data.repositoryOwner.repositories.totalCount;

            document.getElementById("identicon").src = "https://identicons.github.com/" + data.data.repositoryOwner.login + ".png";   
            document.getElementById("identicon").height = 150;
            document.getElementById("identicon").width = 150;

        });

    
}

    $("#search_button").click(function() {
       var searchdata = $("#search").val();
       github(searchdata);
      });