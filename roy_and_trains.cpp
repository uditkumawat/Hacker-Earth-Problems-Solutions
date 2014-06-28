#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		float t0=0,t1=0,t2=0,v1=0,v2=0,d=0;
		cin>>t0>>t1>>t2>>v1>>v2>>d;
		int total1=0,total2=0;
		float temp1=0;
		int temp2=0;
		temp1=d/v1;
		temp1=temp1*60;
		temp2=temp1;
		if(temp1>temp2)
			temp2++;
		total1=t1+temp2;
		temp1=d/v2;
		temp1=temp1*60;
		temp2=temp1;
		if(temp1>temp2)
			temp2++;
		total2=t2+temp2;
		if(t0>t1&&t0>t2)
			cout<<"-1"<<endl;
		else if(t0<=t1&&t0>t2)
			cout<<total1<<endl;
		else if(t0>t1&&t0<=t2)
			cout<<total2<<endl;
		else
			cout<<min(total1,total2)<<endl;


	}
	return 0;
}
