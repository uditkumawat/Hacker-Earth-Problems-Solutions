#include<iostream>
#define MOD 1000000007
using namespace std;
long long int mulmod(long long int a,long long int b,long long int c)
{
	long long x=0;         //end product
	long long y=a%c;        
	while(b>0)
	{
		if(b%2==1)
		{
			x=(x+y)%c;
		}
		y=(y*2)%c;
		b=b/2;
	}
	return x%c;

}
long long int modulo(long long int a,long long int b,long long int c)
{
	long long x=1,y=a;
	while(b>0)
	{
		if(b%2==1)
		{
			x=(x*y)%c;
		}
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}
long long int invmod(long long int x)
{
	return modulo(x,MOD-2,MOD);
}
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		long long int n;
		cin>>n;
		long long int ans=mulmod(mulmod(mulmod(mulmod(n,n-1,MOD),n-2,MOD),n-3,MOD),invmod(24),MOD);
		cout<<ans<<endl;
	}
	return 0;
}
