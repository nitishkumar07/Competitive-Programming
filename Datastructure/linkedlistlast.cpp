#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};
struct node *head;
void insert(int data)
{
    node*temp1=new node();
    temp1->data=data;
    temp1->next=NULL;
    if(head==NULL)
    {
        head=temp1;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=temp1;
}
void print()
{
    node *temp=head;
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
    int n;
    cin>>n;
    int i,data;
    for(i=0;i<n;i++)
    {
        cin>>data;
        insert(data);
        print();
    }
    return 0;
}
