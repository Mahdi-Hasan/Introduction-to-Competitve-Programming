#include<bits/stdc++.h>
using namespace std;
int N,n=0,x;
int main(int argc, char const *argv[])
{
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>n;
		if(x<=n)
			x=n;
	}
	cout<<x;
}