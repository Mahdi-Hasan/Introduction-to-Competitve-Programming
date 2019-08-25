#include<bits/stdc++.h>
using namespace std;
long long N,n=0,x,fa=1,fb=1;
int main(int argc, char const *argv[])
{
	cin>>N;
	for(int i=2;i<=N;i++)
	{
		fb=fa-fb;
		fa+=fb;
		
		cout<<fa<<" ";
	}
	cout<<fa;
}