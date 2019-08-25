#include <bits/stdc++.h>
using namespace std;
int Bit_arr[1005],arr[10005],t,T,size,q,o,in,unum,indx;
int st,end,qf;
void init(int s,int num,int size)
{
	while(s<=size)
	{
		Bit_arr[s]+=num;
		s+=s & (-s);
	}
}
void update(int indx,int unum,int size)
{
	init(indx,unum,size);
}
int query(int range)
{
	int sum=0;
	while(range>0)
	{
		sum+=Bit_arr[range];
		range-=range & (-range);
	}
	return sum;
}
int main()
{
	cin>>T;
	cout<<T;
	for(int l=1;l<=T;l++)
	{
		memset(Bit_arr,0,size);

		cin>>size>>q;
		//for(int s=0;s<size;s++)
			int an;
		for(int s=1;s<=size;s++)
			{
				scanf("%d",an);
				init(s,an,size);
			}
		printf("Case i:%d\n",l);
		for(int s=0;s<q;s++)
		{
			cin>>o;
			if(o==1)
			{
				cin>>in;
				printf("%d\n",Bit_arr[in]);
				init(in,-Bit_arr[in],size);
			}
			else if(o==2)
			{
				cin>>indx>>unum;
				update(indx,unum,size);
			}
			else if(o==3)
			{
				cin>>st>>qf;
				int big=query(qf);
				int small=query(st);
				int ans=big-small;
				cout<<ans<<endl;
			}
		}
	}
}