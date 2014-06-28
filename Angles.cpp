#include<iostream>
using namespace std;
int main()
{
	int n=0,k=0;
	int rajuangles[n];
	int raniangles[k];
	for(int i=0;i<n;i++)
		cin>>rajuangles[i];
	for(int i=0;i<k;i++)
		cin>>raniangles[i];
	int i=0,j=0,m=0;

	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			int temp=rajuangles[j];
			for(m=0;m<360;m++)
			{
				if(temp%360==raniangles[i])
				{
					cout<<"YES"<<endl;
					break;
				}
				temp=temp+rajuangles[j];
			}
		}
		if(j==n)
		cout<<"NO"<<endl;
	}
	return 0;
}
