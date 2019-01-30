#include<bits/stdc++.h>

using namespace std;
int p1_x,p1_y,p2_x,p2_y,p3_x,p3_y,T,sum,r1,r2,r3,p1,p2,p3,p1_f,p2_f,p3_f;
int main()
{
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		cin>>p1_x>>p1_y>>p2_x>>p2_y>>p3_x>>p3_y;
		p1_f=((p1_x-1)*(p1_x-2))/2+p1_y-1+p1_x;
		cout<<p1_x<<" "<<p1_y<<" :"<<p1_f<<endl;
		p2_f=((p2_x-1)*(p2_x-2))/2+p2_y-1+p2_x;
		cout<<p2_x<<" "<<p2_y<<" :"<<p2_f<<endl;
		p3_f=((p3_x-1)*(p3_x-2))/2+p3_y-1+p3_x;
		cout<<p3_x<<" "<<p3_y<<" :"<<p3_f<<endl;
	}
}