#include<bits/stdc++.h>
using namespace std;
#define sf1(a)                scanf("%d",&a)
#define sf2(a,b)              scanf("%d %d",&a,&b)
#define pf1(a)                printf("%d\n",a);
int N,n,Q;
int b,Bit_arr[90000005],arr[90000005];
int x,y,l,r,opt,ans,pre_v;
void initbit(int ind,int num,int size)
{
	while(ind<=size)
	{
		Bit_arr[ind]+=num;
		ind+=ind &(-ind);
	}
}
void update(int ind,int num,int pre_v,int size)
{
	while(ind<=size)
	{
		Bit_arr[ind]+=num;
		Bit_arr[ind]-=pre_v;
		ind+=ind &(-ind);
	}
}
int	query(int r)
{
	b=0;
	while(r>0)
	{
		b+=Bit_arr[r];
		r-=r & (-r);
	}
	return b;
}
int main()
{ 
    sf1(N);   
    for (int i = 1; i <=N; ++i)
    {
    	sf1(n);
    	arr[i]=n%2;
    	if(arr[i]==1)
    		initbit(i,arr[i],N);
    }
    sf1(Q);
    for (int i = 1; i <= Q; ++i)
    {
    	sf1(opt);
    	switch(opt){
    		case 0:
    				sf2(x,y);
    				pre_v=arr[x];
    				if(y%2!=arr[x])  				
    					update(x,y%2,pre_v,N);
    				break;
    		case 1:
    				sf2(l,r);
    				ans=(r-l+1)-(query(r)-query(l-1));
    				pf1(ans);
    				break;
    		case 2:
    				sf2(l,r);
    				ans=query(r)-query(l-1);	
    				pf1(ans);
    				break;
    	}
    }
}