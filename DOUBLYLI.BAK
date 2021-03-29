#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
		int num;
		struct node *next,*prev;
};

typedef struct node NODE;

NODE *start=NULL;
NODE *end=NULL;
NODE * createNode();
NODE * create();

void displayforward(NODE *);
void displaybackward(NODE *);
int count(NODE *);

NODE * insertFirst(NODE *);
NODE * insertLast(NODE *);

NODE * deleteFirst(NODE *);
NODE * deleteLast(NODE *);

int main()
{
		NODE *L=NULL;
		int choice,pos;
		clrscr();
		do
		{
		printf("1.Create List\n");
		printf("2.InsertFirst\n");
		printf("3.InsertLast\n");
		printf("4.Delete First node\n");
		printf("5.Delete Last node\n");
		printf("6.Display forward\n");
		printf("7.Display backward\n");
		printf("8.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
				case 1: L=create();
						break;
				case 2: L=insertFirst(L);
						break;
				case 3: L=insertLast(L);
						break;
			    case 4:  L=deleteFirst(L);
						break;
				case 5: L=deleteLast(L);
						break;
				case 6: displayforward(L);
						break;
				case 7: displaybackward(L);
						break;
				}
		}while(choice!=7);
		getch();
}

NODE * createNode()
{
		NODE *newNode;
		newNode=(NODE *)malloc(sizeof(NODE));
		printf("\nEnter data item:");
		scanf("%d",&newNode->num);
		newNode->next=NULL;
		newNode->prev=NULL;
		return newNode;
}


NODE * create()
{
		int choice;
		NODE *start=NULL;
		do
		{
		if(start==NULL)
		{
				start=createNode();
		}
		else
		{
				insertLast(start);
		}
		printf("Press 1 to continue:");
		scanf("%d",&choice);
		}while(choice==1);
		return start;
}

int count(NODE *start)
{
		int cnt=0;
		NODE *p=start;
		while(p!=NULL)
		{
				cnt++;
				p=p->next;
		}
		return cnt;
}

void displayforward(NODE *start)
{
		NODE *p;
		p=start;
		printf("\nElements of Linked list are:");
		while(p!=NULL)
		{
				printf("%d->",p->num);
				p=p->next;
		}
		printf("NULL\n");
}
void displaybackward(NODE *start)
{
		NODE *p;
		p=end;
		printf("\nElements of Linked list are:");
		while(p!=NULL)
		{
				printf("%d->",p->num);
				p=p->prev;
		}
		printf("NULL\n");
}


NODE * insertFirst(NODE *start)
{
		NODE *newNode;
		newNode=createNode();
		newNode->next=start;
		newNode->next->prev=newNode;
		start=newNode;
		return start;
}


NODE * insertLast(NODE *start)
{
		NODE *p,*newNode;
		newNode=createNode();
		p=start;
		while(p->next!=NULL)
		{
		  p=p->next;

		}
		p->next=newNode;
		newNode->prev=p;
		end=newNode;
		return start;
}


NODE * deleteFirst(NODE *start)
{
		NODE *p;
		p=start;
		start=start->next;
		start->prev=NULL;
		free(p);
		return start;
}

NODE * deleteLast(NODE *start)
{
		int cnt;
		NODE *p=end;
		cnt=count(start);
		if(cnt==0)
				printf("No nodes to delete");
		else if(cnt==1)
				start=NULL;
		else
		{
				end=p->prev;

				free(p);
		}
		return start;
}