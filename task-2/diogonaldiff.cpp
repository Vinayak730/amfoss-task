#include <iostream>

using namespace std;

int main() 
{

    int r,s,ar[102][102],d1=0,d2=0;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            cin>>ar[i][j];
            if(i==j)
               d1+=ar[i][j];
            if(i+j==s-1)
               d2+=ar[i][j];
        }
    }
    r=d1-d2;
    if(r<0)
      r=r*(-1);
      
    cout<<r<<endl;
    return 0;
}
