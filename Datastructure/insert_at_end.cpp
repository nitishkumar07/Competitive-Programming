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
	node * temp=new node();
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		node *temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
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
	node * head=NULL;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int t;
		cin>>t;
		insert(t);
		print();
	}
	return 0;
}

