#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
};
typedef struct node NODE;
NODE*createnode();
NODE*create();
NODE*insertlast(NODE *);
NODE*deletelast(NODE *);
int count(NODE* start);
void display(NODE *);
int main()
{
int s;
NODE *L;
clrscr();
do
{
printf("\n1. Create\n2. Push\n3. Pop\n4. Display\n5. Exit");
printf("\nEnter your s:");
scanf("%d",&s);
switch(s)
{
case 1: L=create();
break;
case 2: L=insertlast(L);
break;
case 3: L=deletelast(L);
break;
case 4: display(L);
break;
}
}
while(s!=5);
getch();
return 0;
}
NODE* create()
{
int s;
NODE *start = NULL;
do{
if(start == NULL)
{
start = createnode();
}
else
{
insertlast(start);
}
printf("Press 1 to continue:");
scanf("%d",&s);
} while(s==1);
return start;
}
NODE* createnode()
{
NODE *p;
p=(NODE*)malloc(sizeof(NODE));
printf("\nEnter a data item:");
scanf("%d",&p->data);
p->next=NULL;
return p;
}
NODE* insertlast(NODE *start)
{
NODE *q,*p;
p=createnode();
q=start;
while(q->next!=NULL)
{
q=q->next;
}
q->next=p;
return start;
}
NODE* deletelast(NODE *start)
{
NODE *p,*q;
p=start;
while(p->next!=NULL)
{
q=p;
p=p->next;
}
q->next=NULL;
return start;
}
int count(NODE* start)
{
int x = 0;
NODE* p = start;
while(p != NULL)
{
x++;
p = p->next;
}
return x;
}
void display(NODE* start)
{
NODE* p=start;
int x = count(start),i,j;
int a = x- 1;

for(i=0;i<x;i++)
{
	p = start;
for(j=a;j>0;j--)
{
	p = p->next;
}
printf("%d->", p->data);
	a--;
}
printf("NULL\n");
}