#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n=0,i=0;
	cin>>n;
	int arr[n];
	int sum=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	sort(arr,arr+n);
//	cout<<sum<<endl;
	if(sum%2==1)
		cout<<sum<<endl;
	else
	{
		for(i=0;i<n;i++)
		{
			if(arr[i]%2==1)
			{
				cout<<(sum-arr[i])<<endl;
				break;
			}
		}
		if(i==n)
		cout<<":("<<endl;
	}
	return 0;
}
