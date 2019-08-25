#include <bits/stdc++.h>
using namespace std;
int b;
struct phonesNode
{
    struct phonesNode *child[10];
    bool isEndOfNumb;
};
struct phonesNode *getNode(void)
{
    struct phonesNode *pNode = new phonesNode();
    pNode->isEndOfNumb = false;
    for (int i = 0; i < 10; i++)
        pNode->child[i] = NULL;
    return pNode;
}
int  insert(int s,int y,int n,struct phonesNode *root, string phones)
{
    //int f,b=0;
  //  if(s!=1){
    struct phonesNode *pCrawl = root;
    for (int i = 0; i < phones.length(); i++)
    {
        int index = phones[i] - '0';

        if (!pCrawl->child[index])
            pCrawl->child[index] = getNode();
        pCrawl = pCrawl->child[index];
       // cout<<
        if(pCrawl->isEndOfNumb == true)
        {
           // f=1;
            cout<<"NO"<<endl;
            s=1;
            return s;
        }
        else{
            
            cout<<"yes"; 

            s=2;
            if(s==1){
           //return s; 
            }     
        }
        pCrawl->isEndOfNumb = true;

    }
}

int main()
{
    string phones[100],s;

    int T;
   cin>>T;
    while(T--)
    {
        int n,s=0,y=0;
        cin>>n;
        struct phonesNode *root = getNode();
        for (int i = 0; i < n; i++)
        {
            cin>>s;
            phones[i]=s;
        }
        for (int i = 0; i < n; i++)
        {
            int p=insert(s,y,n,root, phones[i]);
            if(p==1 || p==2)
               break;
        }
    }
    //return 0;
}
