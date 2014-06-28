#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		long int x=0;
		long int y=0;
		cin>>x>>y;
		//cout<<"x"<<x<<"y"<<y<<endl;
		long int count=0;
		long int z=0;
		bool flag=false;
		for(int i=x;i<=y;i++)
		{
			//cout<<"i="<<i<<endl;
			flag=false;
			for(int j=2;j<=sqrt(i);j++)
			{
				z=j*j;	
				if(i%z!=0)
				{
					flag=true;
				}
				else
				{
					flag=false;
					break;
				}
			}
			if(flag==true)
			count++;
		}
		cout<<count<<endl;
	}
	system("pause");
	return 0;
}
