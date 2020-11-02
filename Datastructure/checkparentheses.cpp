#include<iostream>
#include<string.h>

using namespace std;

struct node
{
	char data;
	node* next;
};
node* top;

void push(char c)
{
	node* temp=new node();
	temp->data=c;
	temp->next=top;
	top=temp;
}

void pop()
{
	node*temp=top;
	top=top->next;
	free(temp);
}

char tele()
{
	return top->data;
}

bool empty()
{
	if(top==NULL)
		return true;
	else
		return false;
}

int main()
{
	top=NULL;
	string s;
	cin>>s;
	bool test=true;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			push(s[i]);
		}
		else if(s[i]==')' || s[i]=='}' || s[i]==']')
		{
			if(empty())
			{
				cout<<"wrong\n";
				test=false;
				break;
			}
			else if(s[i]==')' && tele()=='(')
				pop();
			else if(s[i]=='}' && tele()=='{')
				pop();
			else if(s[i]==']' && tele()=='[')
				pop();
			else
			{
				cout<<"wrong\n";
				test=false;
				break;
			}
		}
	}
		if(test)
		{
			if(empty())
				cout<<"right\n";
		}
	return 0;
}
