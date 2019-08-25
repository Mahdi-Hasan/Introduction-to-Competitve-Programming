#include<bits/stdc++.h>
using namespace std;
long long N,n=0,x,fa=1,fb=1;
string s;
int main(int argc, char const *argv[])
{
	cin>>N>>n;
	char vs[100][100];
	

	for(int j=1;j<=N;j++)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>vs[j][i];
		}
	}
	for(int j=1;j<=N;j++)
	{
		for(int i=1;i<=n;i++)
		{
			if(vs[j][i]=='.')
			{
				if(vs[j][i+1]!='*' && vs[j][i-1]!='*'&&vs[j+1][i]!='*'&&vs[j-1][i]!='*')
					x++;
			}
		}
		//cout<<endl;
	}
	/*if(vs[0][6]!='*')
		cout<<"yes";
	else
		cout<<"no";*/
	cout<<x;
	
}