#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0,saal=0;
	cin>>x>>y;
	saal=0;
	while(x>=y)
	{
		saal=saal+y;
		x=x-y+1;
	}
	if(x!=0)
	{
	saal=saal+x;
	}
	cout<<saal<<endl;
	return 0;
}
