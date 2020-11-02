#include<iostream>

using namespace std;

struct node
{
	int data;
	node* next;
};
node* top;

void insert(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		node*temp=new node();
		temp->data=a[i];
		temp->next=top;
		top=temp;
	}
}

int tele()
{
	return top->data;
}

void pop()
{
	node* temp;
	temp=top;
	top=top->next;
	free(temp);
}
int main()
{
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	insert(a,n);
	for(i=0;i<n;i++)
	{
		a[i]=tele();
		pop();
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
