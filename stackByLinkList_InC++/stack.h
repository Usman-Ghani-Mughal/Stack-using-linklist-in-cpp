#include "Node.h"

struct Stack
{
private:
	int size;
	Node *top;
public:
	void push(int);
	int pop();
	int getSize();
	bool search(int);
	void display();
};