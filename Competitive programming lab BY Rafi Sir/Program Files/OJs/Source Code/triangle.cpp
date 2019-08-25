#include<bits/stdc++.h>
using namespace std;
int ab,bc,ca,j,k;
string bd_dc,bd,cd;
int main()
{
	cin>>ab>>bc>>ca;
	getline(cin,bd_dc);
	//cout<<bd_dc;
	//c=(ac-ab)/2;
	for(int i=0;bd_dc[i]!=':';i++)
	{
		bd[i]=bd_dc[i];
		j=i;
		//cout<<bd[i];
	}
	for(j=j+1;bd_dc[j]!='\0';j++)
		cd[j]=bd_dc[j];

	//cout<<bd<<" "<<cd;
	int myint1 = stoi(bd); 
    int myint2 = stoi(cd);
    cout<<myint1<<" "<<myint2;
	//b=bd_dc[0]/bd
	//std::cout<<a+b<<std::endl;
	return 0;
}