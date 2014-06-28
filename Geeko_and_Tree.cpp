#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		int k=0,n=0;
		cin>>k>>n;
		int nodes=0;
		nodes=pow(k,n+1);
		nodes--;
		nodes=nodes/(k-1);
		int sum=0;
		while(nodes!=0)
		{
			sum=sum+nodes%10;
			nodes=nodes/10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
