#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define FULL 10
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

struct queue
{
    int count;
    node *front;
    node *rear;
};
typedef struct queue queue;

void create(queue *q)
{
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
}

int isempty(queue *q)
{
    return (q->rear == NULL);
}

void enqueue(queue *q, int value)
{
    if (q->count < FULL)
    {
	node *tmp;
	tmp = malloc(sizeof(node));
	tmp->data = value;
	tmp->next = NULL;
	if(!isempty(q))
	{
	    q->rear->next = tmp;
	    q->rear = tmp;
	}
	else
	{
	    q->front = q->rear = tmp;
	}
	q->count++;
    }
    else
    {
	printf("List is full\n");
    }
}

int dequeue(queue *q)
{
    node *tmp;
    int n = q->front->data;
    tmp = q->front;
    q->front = q->front->next;
    q->count--;
    free(tmp);
    return(n);
}

void display(node *head)
{
    if(head == NULL)
    {
	printf("NULL\n");
    }
    else
    {
	printf("%d\n", head -> data);
	display(head->next);
    }
}

int main()
{
    int n=0,a;
    queue *q;
    clrscr();
    q = malloc(sizeof(queue));
    create(q);
    while(n!=4)
    {
    printf("1,enqueue\n2,dequeue\n3,display\n4,exit\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:  printf("Enter the element");
	     scanf("%d",&a);
	     enqueue(q,a);
	     break;
    case 2:  dequeue(q);
	     break;
    case 3:  display(q->front);
	     break;
    }
}
    getch();
    return 0;
}