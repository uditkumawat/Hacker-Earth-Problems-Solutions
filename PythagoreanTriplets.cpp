#include<iostream>
using namespace std;
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		int cs=0;
		cin>>cs;
		int count=0;
		for(int a=1;a<=cs;a++)
		{
			for(int b=a;b<=cs;b++)
			{
				for(int c=b;c<=cs;c++)
				{
					if(a*a+b*b==c*c)
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
