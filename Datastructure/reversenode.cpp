#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};
	struct node*head;
node* reverse(node *head)
{
	node *current,*pre,*nex;
	current =head;pre=NULL;
	while(current!=NULL)
	{
		nex=current->next;
		current->next=pre;
		pre=current;
		current=nex;
	}
	head=pre;
	return head;
}
node* insert(node* head, int data)
{
	node *temp=new node();
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{
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
	return head;
}
void print(node *head)
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
		int data;
		cin>>data;
		head=insert(head,data);
		print(head);
	}
	head=reverse(head);
	print(head);
	return 0;
}
