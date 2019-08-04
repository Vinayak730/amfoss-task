#include <iostream>

using namespace std;

int main(void)
{
    long long i,j,l,w,a;
    cout<<"Enter the size of the Theatre Square"<<endl;
    cin>>i>>j;
    cout<<"Enter the side of your flagstone"<<endl;
    cin>>a;
    
    l=i/a;
    w=j/a;
    
    if(i%a!=0)l++;
    if(j%a!=0)w++;
    
    cout<<l*w<<endl;
    return 0;
}