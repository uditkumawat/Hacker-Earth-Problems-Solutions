#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
	char msg[102];
	cin>>msg;
	int len=strlen(msg);
	bool lindex=false,oindex=false,vindex=false,eindex=false;
	int index=0;
	for(int i=0;i<len;i++)
	{
		if(msg[i]=='l')
		{
			index=i;
			lindex=true;
			break;
		}
	}
	for(int i=index;i<len;i++)
	 {       
	                   if(msg[i]=='o')
	                    {
	                             index=i;
	                              oindex=true;
				      break;
	                   }
       	}
	for(int i=index;i<len;i++)
	{       
			                   if(msg[i]=='v')
			                    {
			                             index=i;
			                              vindex=true;
						      break;
			                       }
	 }
	for(int i=index;i<len;i++)
	 {       
					                   if(msg[i]=='e')
					                    {
					                             index=i;
					                              eindex=true;
								      break;
					                       }
	 }
	if(lindex&&oindex&&vindex&&eindex)
		cout<<"I love you, too!"<<endl;
	else
		cout<<"Let us breakup!"<<endl;

	return 0;
	       
}
