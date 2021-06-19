#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
	int ch,val;
	Stack *obj=new Stack();
	while(true)
	{
		cout<<"Press 1 for push"<<endl;
		cout<<"Press 2 for pop"<<endl;
		cout<<"Press 3 for display"<<endl;
		cout<<"Press 4 for getSize"<<endl;
		cout<<"Press 5 for search"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			{
				cout<<"Enter the value you want to add :";
				cin>>val;
				obj->push(val);
				break;
			}
		case 2:
			{
				cout<<"This is come out from Stack : "<<obj->pop();
				break;
			}
		case 3:
			{
				obj->display();
				break;
			}
		case 4:
			{
				cout<<"This is the size of Stack : ";obj->display();
				break;
			}
		case 5:
			{
				cout<<"Enter the value you want to Search : ";
				cin>>val;
				obj->search(val);
				break;
			}
		default:
			{
				cout<<"You press wrong***"<<endl;
			}
		}
	}
	

	return 0;
}