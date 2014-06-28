#include<iostream>
#include<cstring>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	vector<string> v;
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		string str;
		cin>>str;
		long len=str.length();
		v.clear();
		for(long int i=0;i<len;i++)
		{
			for(long int j=1;j<len-i;j++)
			{
				v.push_back(str.substr(i,i+j));
			}
		}
		int sov=v.size();
		int count=0;
		bool a=false,b=false,c=false;
		for(int i=0;i<sov;i++)
		{
			for(int j=0;j<v[i].length();j++)
			{
				if(v[i]=='a')
				{
					a=true;
				}
				else if(v[i]=='b')
				{
					b=true;
				}
				else if(v[i]=='c')
				{
					c=true;
				}
			}
			if(a&&b&&C)
				count++;
		}
		cout<<v.size()-count<<endl;
	}
	return 0;
}
