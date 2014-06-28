#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int sr=0,sc=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]=='S')
			{
				sr=i;
				sc=j;
				break;
			}
		}
	}
	int count=0;
	for(int i=sr;i<n;i++)
	{
		for(int j=sc;j<n;j++)
		{
			if(arr[i][j]=='E')
			{
				break;
			}
			if(arr[i+1][j]=='P')
			{
				i=i+1;
				j=j;
				count++;
			}
			else if(arr[i][j+1]=='P')
			{
				i=i;
				j=j+1;
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
