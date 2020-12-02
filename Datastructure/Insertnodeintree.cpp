#include<iostream>

using namespace std;

struct Bstnode
{
    int data;
    Bstnode* left;
    Bstnode* right;
};
Bstnode* creatnode(int data)
{
    Bstnode* newnode= new Bstnode();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Bstnode* insert(Bstnode* root, int data)
{
    if(root==NULL){
        root=creatnode(data);
        return root;
    }
    else
    {
        if(root->data>=data)
        {
            root->left=insert(root->left,data);
        }
        else 
        root->right=insert(root->right,data);
    }
    return root;
    
}
bool search(Bstnode* root,int x)
{
    if(root==NULL)
    return false;
    else if(root->data==x)
    return true;
    else
    {
        if(root->data>=x)
        {
            return search(root->left,x);
        }
        else
        {
            return search(root->right,x);
        }
        
    }
    
}
int main()
{
    Bstnode* root=NULL;
    int n;
    cin>>n;
    int i;
    while(n--)
    {
        int data;
        cin>>data;
        root=insert(root,data);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        if(search(root,s))
        cout<<"found\n";
        else
        {
            cout<<"notfound\n";
        }
        
    }
    return 0;

}