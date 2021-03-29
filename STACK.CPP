#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define max_size 5
int stack[max_size],top=-1;
/*------ Function Prototype------------*/
void push();
void pop();
void peep();
void display();
/*-------------------------------------*/
void  main()
{
	int choice;
	do{
		//cout<<"\n";
		cout<<"\n\n--------STACK OPERATIONS-----------\n";
		cout<<"1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Peep\n";
		cout<<"4.Display\n";
		cout<<"5.Exit\n";
		cout<<"-----------------------";
		cout<<"\nEnter your choice:\t";
		cin>>choice;
		switch(choice)
		{
			case 1:
					push();
					break;
			case 2:
					pop();
					break;
			case 3:
					peep();
					break;
			case 4:
					display();
					break;
			case 5:
					exit(0);
					break;
			default:
					cout<<"\nInvalid choice:\n";
					break;
		}
	}while(choice!=5);
getch();
}
void push() //Inserting element in to the stack
{
	int item;
	if(top==(max_size-1))
	{
		cout<<"\nStack Overflow:";
	}
	else
	{
		cout<<"Enter the element to be inserted:\t";
		cin>>item;
		top=top+1;
		stack[top]=item;
	}
}
void pop()      //deleting an element from the stack
{
	int item;
	if(top==-1)
	{
		cout<<"Stack Underflow:";
	}
	else
	{
		item=stack[top];
		top=top-1;
		cout<<"\nThe poped element: "<<item;
	}
}
void peep()
{
	if(top==-1)
	{
		cout<<"\nStack is empty:";
	}
	else
	{
		cout<<"The topmost element of the stack is "<<stack[top];
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		cout<<"\nStack is Empty:";
	}
	else
	{
	cout<<"\nThe stack elements are:\n" ;
	for(i=top;i>=0;i--)
	{
		cout<<"\n"<<stack[i];
	}
	}

}

