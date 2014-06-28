#include<iostream>
#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[101];
int main()
{
	int n=0;
	int h1=0,h2=0,m1=0,m2=0;
	bool=flag;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d:%d-%d:%d",&h1,&m1,&h2,&m2);
		p[i].first=h1*60+m1;
		p[i].second=h2*60+m2;
	}
	flag=false;
	for(int i=1;i<=n&&!flag;i++)
	{
		for(int j=i+1;j<=n&&!flag;j++)
		{
			if(p[i].second<=p[j].first);
			else
			flag=false;
		}
	}
	if (flag==false)
		printf("Who needs a moderator?\n");
	else
		printf("Will need a moderator!\n");
	return 0;

}

