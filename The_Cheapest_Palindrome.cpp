#include<iostream>
#include<cstring>
#include<string.h>
int m(int a,int b)
{
	return a>b?b:a;
}
using namespace std;
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		int min=0;
		char minchar;
		char s[10000];
		cin>>s;
		int len=strlen(s);
		//cout<<s<<" "<<len<<endl;
		int acost=0,bcost=0;
		cin>>acost>>bcost;
		if(acost>bcost)
		{
			min=bcost;
			minchar='b';
		}
		else
		{
			min=acost;
			minchar='a';
		}
		int sum=0;
		int count=0;
		for(int i=0;i<len/2;i++)
		{
			if(s[i]==s[len-1-i]||s[i]=='/'||s[len-1-i]=='/')
			{
				count++;
				if((s[i]=='a'&&s[len-1-i]=='/')||(s[i]=='/'&&s[len-1-i]=='a'))
				{
					sum=sum+acost;
				}
				if((s[i]=='b'&&s[len-1-i]=='/')||(s[i]=='/'&&s[len-1-i]=='b'))
				{
					sum=sum+bcost;
				}
				if((s[i]=='/')&&(s[len-1-i]=='/'))
				{
					sum=sum+2*min;
				}
			}
		}
		if(count==len/2)
		cout<<sum<<endl;
		else
		cout<<"-1"<<endl;
	}
	return 0;
}
