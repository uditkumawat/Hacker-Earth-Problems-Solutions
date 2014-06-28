#include<iostream>
#define MAX 100004
using namespace std;
int x[MAX];
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		int n=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		x[0]=arr[0];
		for(int i=1;i<n;i++)
			x[i]=x[i-1]^arr[i];
		int q=0;
		cin>>q;
		while(q-->0)
		{
			int a=0,b=0;
			cin>>a>>b;
			if(a>0)
				cout<<(x[b]^x[a-1])<<endl;
			else
				cout<<x[b]<<endl;
		}
	}
	return 0;
}
