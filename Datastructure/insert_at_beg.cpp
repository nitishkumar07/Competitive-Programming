#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};
node *head;
void insert(int data)
{
	node* temp=new node();
	temp->data=data;
	temp->next=head;
	head=temp;
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
	int n;
	cin>>n;
	node*head=NULL;
	int i;
	for(i=0;i<n;i++)
	{
		int t;
		cin>>t;
		insert(t);
		print();
	}
	return 0;
}

