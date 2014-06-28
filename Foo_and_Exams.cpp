#include<iostream>
using namespace std;
unsigned long long int cube(unsigned long long int num)
{
	return num*num*num;
}
unsigned long long int square(unsigned long long int num)
{
	return num*num;
}
unsigned long long int foo_function(int a,int b,int c,int d,int t)
{
	return ((unsigned long long int)a*cube(t)+b*square(t)+c*t+d);
}
int binarysearch(int a,int b,int c,int d,int left,int right,unsigned long long val)
{
	unsigned long long temp;
	int low=left,high=right;

	while(low<=high)
	{
		int mid=(low+high)/2;

		temp=foo_function(a,b,c,d,mid);

		if(temp<=val&&(mid==right||(foo_function(a,b,c,d,mid+1))>val))
		return mid;

		if(temp>val)
		high=mid-1;
		else if(temp<val)
		low=mid+1;
	}
}
int main()
{
	int tc=0;
	cin>>tc;
	while(tc-->0)
	{
		int a=0,b=0,c=0,d=0,k=0;
		cin>>a>>b>>c>>d>>k;
		unsigned long long int val=0;
		cin>>val;
		int lower=1;
		int upper=1000000;
		cout<<binarysearch(a,b,c,d,lower,upper,val)<<endl;
	}
	return 0;
}
