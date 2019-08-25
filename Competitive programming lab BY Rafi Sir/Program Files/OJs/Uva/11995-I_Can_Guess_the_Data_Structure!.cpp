#include<bits/stdc++.h>
using namespace std;
int N;
void pop()
int main()
{
	int a,b,n=0;
	
	
	while(scanf("%d", &N) ==1)
	{
		n++;
		vector<int>V,v1,v2;
		int q=0,stack=0,pq=0,push_b=0,pop_b=0,l;
		//cin>>N;
		cout<<"n="<<n<<endl;
		for(int m=0;m<N;m++)
		{
			cin>>a>>b;
			if(a==1)
			{
				v1.push_back(b);
				push_b++;
			}
			if(a==2){
				v2.push_back(b);
				pop=true;
				//cout<<"b "<<b<<endl;
				pop_b++;
			}
			
			for(int i=0,j=0;i<v1.size(),j<v2.size();i++,j++)
				{
					//cout<<"Q..";
					//cout<<v1[i]<<" "<<v2[j]<<endl;
					if(v1[i]==v2[j])
						q=1;
					else{
						q=0;
						break;
					}
				}
		}
			if(pop)
			{
			for(int i=0,j=v2.size()-1;i<v1.size(),j>=0;i++,j--)
				{
					//cout<<"stack..";
					//cout<<v1[i]<<" "<<v2[j]<<endl;
					if(v1[i]==v2[j])
						stack=1;
					else
					{
						stack=0;
						break;
					}
				}
			sort(v1.rbegin(),v1.rend());
			cout<<"V1 ";
			for(l=0;l<v1.size()-1;l++)
				cout<<v1[l]<<" ";
			for(int i=0,j=0;i<v2.size()-1,j<=v2.size()-1;i++)
			{	cout<<"pq..";
				cout<<v1[i]<<" "<<v2[i]<<endl;
					if(v1[i] ==v2[i])
						pq=1;
					else
					{
						//pq=0;
						break;
					}
			}
		}
		cout<<"q pq st"<<q<<pq<<stack;
		if((q==1 && stack==1)||(stack==1 && pq==1)||(q==1 &&pq==1))
			cout<<"not sure"<<endl;
		else if(q==1)
			cout<<"queue"<<endl;
		else if(stack==1)
			cout<<"stack"<<endl;
		else if(pq==1)
			cout<<"priority queue"<<endl;
		else
			cout<<"impossible"<<endl;
	}
	
}
