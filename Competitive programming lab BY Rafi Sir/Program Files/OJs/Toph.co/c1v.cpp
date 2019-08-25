#include<bits/stdc++.h>
using namespace std;
int n;
char c,ans_c;
int main()
{
    string pass;
	cin>>n;
    getchar();
    getline(cin,pass);
	for(int i=0;i<pass.length();i++)
    {
        if (isalpha(pass[i]))
        {
            if(pass[i]>='A' && pass[i]<='Z'){
                if(isalpha((pass[i]-n)))
                    putchar(((pass[i])-n));
                else{
                    int m=n-(pass[i]-'A');
                  //  cout<<c<<" "<<m<<endl;
                    ans_c='Z'-m+1;
                    putchar(ans_c);
                }

            }
            else
            {
                c=pass[i]-n;
                if(c>='a'&& c<='z')
                    putchar(c);
                else{
                    int m=n-(pass[i]-'a');
                  //  cout<<c<<" "<<m<<endl;
                    ans_c='z'-m+1;
                    putchar(ans_c);
                }

            }
        }
        else
            cout<<pass[i];
    }
}