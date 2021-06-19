#include "stack.h"
#include <iostream>
using namespace std;


void Stack::push(int d)
{
	Node *temp=new Node();
	temp->data=d;
	temp->next=this->top;
	this->top=temp;
	cout<<"Data has been Sucessfully add in Stack"<<endl;
	this->size++;
}
int Stack::pop()
{
	int num;
	Node *temp;
	temp=this->top;
	this->top=this->top->next;
	num=temp->data;
	delete temp;
	this->size--;
	return num;
}
int Stack::getSize()
{
	return this->size;
}
bool Stack::search(int d)
{
	Node *move=this->top;
	while(move!=NULL)
	{
		if(move->data==d)
		{
			return true;
		}
		move=move->next;
	}
	return false;
}
void Stack::display()
{
	Node *move=this->top;
	while(move!=NULL)
	{
		cout<<move->data<<" ";
		move=move->next;
	}
}