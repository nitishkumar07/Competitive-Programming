#include<iostream>

using namespace std;

struct node
{
	int data;
	node* prev;
	node* next;
};
struct node* head;

insertatpos(int x,int pos)
{
	node* newnode= new node();
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
	node* temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data>=x)
		{
			
