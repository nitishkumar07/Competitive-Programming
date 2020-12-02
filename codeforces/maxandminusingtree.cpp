#include<iostream>

using namespace std;

struct bstnode
{
    int data;
    bstnode* left;
    bstnode* right;
};
bstnode* creatnode(int data)
{

    bstnode* newnode = new bstnode();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
bstnode* insert(bstnode* root,int data)
{
    if(root==NULL)
    {
        root=creatnode(data);
        return root;
    }
    else
    {
        if(root->data>=data)
        root->left=insert(root->left,data);
        else
        {
            root->right=insert(root->right,data);

        }
        return root;
    }
    
}
int minimum(bstnode* root)
{
    if(root==NULL)
    {
        cout<<"tree is empty";
        return -1;
    }
    else if(root->left==NULL)
    {
        return root->data;
    }
    else
    return minimum(root->left);
}
int maximum(bstnode* root)
{
    if(root==NULL)
    {
        return -1;
    }
    else if(root->right==NULL)
    return root->data;
    else
    return maximum(root->right);
}
int main()
{
    bstnode* root=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int data;
        cin>>data;
        root=insert(root,data);
    }
    int min,max;
    min=minimum(root);
    max=maximum(root);
    cout<<min<<"\n"<<max;
    return 0;
}