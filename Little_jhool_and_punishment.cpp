#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		int n=0;
		cin>>n;
		int b=0,g=0;
		cin>>b>>g;
		int diff=0;
		diff=abs(b-g);
		if(diff>1)
			cout<<"Little Jhool wins!"<<endl;
		else
			cout<<"The teacher wins!"<<endl;
	}
	return 0;
}
