#include <iostream>
using namespace std;

int main()
{
	int n,k,i,s=0;
	int p[50];
	cin>>n>>k;
	for(i=0;i<n;i++)
	 cin>>p[i];
	for(i=0;i<n;i++)
	{
	    if(p[i]>=p[k-1]&&p[i]>0)
	    s++;
	}
	cout<<" Number of participants who advance to the next round "<<s;
	 return 0;
}
