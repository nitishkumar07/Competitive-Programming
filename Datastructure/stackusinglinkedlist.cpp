#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};
node *top=NULL;

void push(int x)
{
	node* temp= new node();
	temp->data=x;
	temp->next=top;
	top=temp;
}

void pop()
{
	node* temp;
	if(top==NULL)
		return;
	temp=top;
	top=top->next;
	free(temp);
}

void print()
{
	node* temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}

int main()
{
	top=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		push(t);
		print();
	}
	pop();
	print();
	return 0;
}
