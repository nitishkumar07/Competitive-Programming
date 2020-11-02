#include<iostream>

using namespace std;

struct node
{
	int data;
	node* next;
};
struct node* head;
void insert(int n)
{
	node* temp= new node();
	temp->data = n;
	temp->next = NULL;
	if(head==NULL)
	{
		temp->next=head;
		head=temp;
		return;
	}
	node* temp1=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
}
void print()
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}
void reverse(node* p)
{
	if(p->next==NULL)
	{
		head=p;
		return;
	}
	reverse(p->next);
	node* q=p->next;
	q->next=p;
	p->next=NULL;
}
int main()
{
	head=NULL;
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		insert(t);
		print();
	}
	reverse(head);
	print();
	return 0;
}

