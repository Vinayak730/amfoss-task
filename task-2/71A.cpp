#include <iostream>
using namespace std;

int main() 
{
    int a,i;
    string w;
    cin>>a;
    
    for (i=0;i<a;i++)
    {
        cin>>w;
        if(w.length()>10)
          cout<<w[0]<<w.length()-2<<w[w.length()-1]<<endl;
        else
          cout<<w<<endl;
    }

	return 0;
}
