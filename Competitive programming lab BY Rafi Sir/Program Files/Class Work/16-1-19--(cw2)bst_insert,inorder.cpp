#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left,*right;
    Node (int root_data)
    {
    this->data=root_data;
    this->left=NULL;
    this->right=NULL;
    }
};
void inorder_traverse(Node *root)
{
    if(root !=NULL)
    {
        inorder_traverse(root->left);
        cout<<root->data<<"  ";
        inorder_traverse(root->right);
    }
}

Node* insert(Node *root,int data)
{
    if(root==NULL)
        return new Node(data);

    else if(data<root->data)
            root->left=insert(root->left,data);

    else
        root->right=insert(root->right,data);

    return root;
}
int main()
{
  Node* root=NULL;

  root=insert(root,1);
       insert(root,10);
       insert(root,3);
       inorder_traverse(root);
}
