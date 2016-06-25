//2 Write a program to implement stack which should be able to check the condition of underflow and overflow.
#include<stdio.h>
#define STACKSIZE 5
//Creating Structure
typedef struct{
	int top;
	int items[STACKSIZE];
}stack; 
//main function
void push (stack*, int);
int pop (stack*);
int main()
{
	stack s;
	s.top=-1;
	push(&s,3);
	push(&s,4);
	push(&s,5);
	printf("%d",pop(&s));
}
//Subroutine for Overflow stack
void push (stack*s, int x)
{
	if (s->top==STACKSIZE-1)
	{
		printf("Overflow");
		exit(1);
	}
	else
	{
	s->items[++(s->top)]=x;
	}
}
//Subroutine for underflow
int pop(stack*s)
{
	if (s->top==-1)
	{
		printf("Underflow\n");
	}
		else{
	return (s->items[(s->top)--]);
}
}

