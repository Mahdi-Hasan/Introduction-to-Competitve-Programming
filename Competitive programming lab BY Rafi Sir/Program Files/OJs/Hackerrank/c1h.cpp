#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pf1(a)                printf("%d\n",a);
#define sf1ll(a)              scanf("%lld",&a)
#define sf2ll(a,b)            scanf("%lld %lld",&a,&b)
ll ans,N,n,l,r,n1,n2,ans1,ans2;
int main()
{
	sf1ll(N);
	while(N--){
		n=0,ans=0;
		sf2ll(l,r);
		if(l%2!=0)
			l--;
		if(r%2!=0)
			r--;
		n=r/4;
		l-=4;
		n1=l/4;
		cout<<n1<<" "<<n<<" ";
		ans2=(n*(n+1));
		cout<<ans2<<endl;
		ans1=(n1*(n1+1));
		cout<<ans1<<endl;
		ans1=(l%4==0)?ans1=ans1:ans1=ans1+(n1+1);
		cout<<ans1<<endl;
		ans2=(r%4==0)?ans2=ans2-n:ans2=ans2;
		cout<<ans2<<endl;
		ans=(ans2-ans1);
		cout<<ans<<endl;
	}
}
