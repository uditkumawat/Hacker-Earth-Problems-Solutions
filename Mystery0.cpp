#include<iostream>
#include<cstring>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		char str[101];
		int d=0;
		cin>>str>>d;
		d=d%26;
		int len=strlen(str);
		if(d<0)
		d=26-abs(d);
		for(int i=0;i<len;i++)
		{
				if(str[i]+d>'z')
				{
					str[i]='a'+d;
				}
				else
				{
					str[i]=str[i]+d;
				}
		}
		cout<<str<<endl;
	}
	return 0;
}
