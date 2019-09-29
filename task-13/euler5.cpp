#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int test,x,i,j,k,a,b,s;
    cin>>test;

    for(i = 0;i < test; i++)                     
    {
        cin >> x;
        a = 1;
        
        for(j = 1;j < x;j++)                      
        {
            b = j+1;
            s = a*b;
            for(k = 2; k <= s;k++)                  
            {
                if(k%a==0 && k%b==0)                
                    {
                        a = k;
                        break;
                    }
            }    
        }

        cout << a <<endl;
    }
    
    
    return 0;
}
