#include<bits/stdc++.h>
using namespace std;
int N,n=0,x,a,an1,an2=7;
int main(int argc, char const *argv[])
{
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>n;
		a=an1;
		//an1=n-an1;
		//an2=an2-n;
		if(n-an1<=an2-n)
		{
			cout<<"A";
			//an2+=n;
			an1=n;
		//	cout<<" "<<an1<<" "<<an2;
			cout<<endl;
		}
		else
		{
			cout<<"B";
			an2=n;
		//	cout<<" "<<an1<<" "<<an2;
			cout<<endl;
		}
		//cout<<an1<<" "<<an2;
	}
}