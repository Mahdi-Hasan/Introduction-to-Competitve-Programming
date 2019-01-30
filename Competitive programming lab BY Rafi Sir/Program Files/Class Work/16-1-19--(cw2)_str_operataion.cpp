#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,i,j,k=0;
string s1,s2;
vector<char>t[100];
int main()
{
    getline(cin,s1);

    for(i=-1;s1[i]!='\0';)
    {
        i++;
        if(s1[i]=='T')
        {
            while(s1[i]!=' ' && (s1[i]!='.'))
            {
               t[k].push_back(s1[i]);
               cout<<s1[i]<<"";
               i++;
            }
            cout<<endl;
            k++;
        }

    }
/*    for(int v=0;v<=k;v++)
    {
        if(t[v]==t[v+1])

        cout<<t<<" ";
    }

*/
}
/*
TDD tef The tOO Tpp TGad
*/
