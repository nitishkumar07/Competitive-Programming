#include<iostream>

using namespace std;

struct node
{
	int data;
	node* next;
};
node* head;
void insert(int data, int pos)
{
	node* temp= new node();
	temp->data=data;
	temp->next=NULL;
	if(pos==1)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		node* temp1=head;
		for(int i=0;i<pos-2;i++)
		temp1=temp1->next;
		temp->next=temp1->next;
		temp1->next=temp;
	}
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
int main()
{
	node*head=NULL;
	int n,i,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int data;
		cin>>data>>t;
		insert(data,t);
		print();
	}
	return 0;
}
