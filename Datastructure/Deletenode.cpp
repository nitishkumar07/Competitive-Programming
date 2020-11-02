#include<iostream>

using namespace std;

struct node 
{
    int data;
    node *next;
};
struct node *head;
void insert(int n)
{
    node *temp= new node();
    temp->data = n;
    temp->next = NULL;
    //node *temp1=head;
    temp->next=head;
    head=temp;
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
void remove(int n)
{
    node *temp=head;
    if(n==1)
    {
        head=temp->next;
        delete temp;
        return;
    }
    for(int i=0;i<n-2;i++)
    temp = temp->next;
    node *temp1=temp->next;
    temp->next=temp1->next;
    delete temp1;
}
int main()
{
    head = NULL;
    int i,t,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>n;
       insert(n);
       print();
    }
    int d,c;
    cin>>c;
    while(c--)
    {
        cin>>d;
        remove(d);
        print();
    }
    return 0;
 }
