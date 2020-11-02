#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};
    struct node* head;
void insert(int data, int x)
{
    node *temp1=new node();
    temp1->data=data;
    temp1->next = NULL;
    if(x==1)
    {
        temp1->next=head;
        head=temp1;
     }
     else
     {
     node *temp2=head;
     for(int i=0;i<x-2;i++)
     {
        temp2= temp2->next;
     }
     temp1->next = temp2->next;
     temp2->next = temp1;
     }
}
void print()
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main()
{
    head=NULL;
    int n,i,j,data,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>data>>x;
        insert(data,x);
        print();
    }
    return 0;
}
