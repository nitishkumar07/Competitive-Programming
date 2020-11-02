#include<iostream>

using namespace std;

struct node
{
	int data;
	node* prev;
	node* next;
};
struct node* head;

node* getnewnode(int x)
{
	node* newnode= new node();
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}

void insertathead(int x)
{
	node* newnode=getnewnode(x);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}

void insertattail(int x)
{
	node*newnode=getnewnode(x);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
}

void print()
{
	node* temp=head;
	cout<<"forword: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}

void reverseprint(node* head)
{
	node* temp=head;
	if(temp == NULL) return;
	while(temp->next!=NULL)
		temp=temp->next;
	cout<<"reverse: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
	cout<<"\n";
}

int main()
{
	head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"data= ";
		int a;
		cin>>a;
		//insertathead(a);
		insertattail(a);
		print();
	}
	reverseprint(head);
	return 0;
}

