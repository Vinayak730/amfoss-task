#include <iostream>
using namespace std;

int main() {
	int a[2],b[2],i,alice=0,bob=0;
	cin>>a[0]>>a[1]>>a[2];
	cin>>b[0]>>b[1]>>b[2];
	for(i=0;i<3;i++)
	{
	    if(a[i]>b[i])
	     alice++;
	    else if(a[i]<b[i])
	     bob++;
	    else
	     continue;
	}
	cout<<alice<<" "<<bob;
	return 0;
}
