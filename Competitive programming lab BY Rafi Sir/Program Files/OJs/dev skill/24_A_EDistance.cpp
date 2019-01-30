#include<bits/stdc++.h>
using namespace std;
int T;
long double N;
int main()
{
	cin>>T;
	for(int i=1;i<=T;i++)
	{

		cin>>N;
		if(N>0)
			cout<<"Case "<<i<<":"<<N<<" is a valid result"<<endl;
		else
	
			cout<<"Case "<<i<<":"<<N<<" is a not valid result"<<endl;
	}
}