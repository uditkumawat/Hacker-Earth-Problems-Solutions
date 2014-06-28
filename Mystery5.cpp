#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		int count[256]={0};
		char str[10001];
		cin>>str;
		int len=strlen(str);
		for(int i=0;i<len;i++)
		{
			count[str[i]]++;
		}
		int max=0;
		for(int i=0;i<256;i++)
		{
			if(count[i]>max)
			{
				max=count[i];
			}
		}
		cout<<max<<endl;
	}
	return 0;
}

