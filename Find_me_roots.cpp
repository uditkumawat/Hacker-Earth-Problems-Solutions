#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	while(n-->0)
	{
		int a=0,b=0,c=0;
		cin>>a>>b>>c;
		if((b*b-4*a*c)>=0)
			count++;
	}
	cout<<count<<endl;
	return 0;
}
