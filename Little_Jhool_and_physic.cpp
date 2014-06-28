#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	size_t found0=str.find("000000");
	size_t found1=str.find("111111");
	if(found0!=string::npos||found1!=string::npos)
		cout<<"Sorry, sorry!"<<endl;
	else
		cout<<"Good luck!"<<endl;
	return 0;

}
