#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 50
int front= -1, rear= -1,i= 0;
int queue[max];
void enqueue(int t)
{
 if( isFull() )
 {
 printf("\nQueue OverFlow");
 }
 else if( front == -1 )
 {
 rear = (rear+1) % max;
 queue[rear] = t;
 front = (front+1)%max;
 }
 else
 {
 rear = (rear+1) % max;
 queue[rear] = t;
 }
}
int dequeue()
{
 int t;
 if(isEmpty() == -1)
 {
 printf("Queue Undertlow");
 return -1;
 }

 if(front == rear)
 {
 t = queue[front];
 front = rear = -1;
 return t;
 }
 else
 {
 t = queue[front];
 if( front == max-1)
 front = 0;
 else
 front = front+1;
 }
 return t;
}
int isFull()
{
 return ((rear+1)%max == front);
}
int isEmpty ()
{
 if( front == -1 )
 {
 return -1;
 }
 return 0;
}
void display()
{
 int f=front, r=rear;
 if(f == -1)
 {
 printf("\nQueue is Empty\n");
 }
 printf("\nElements in Queue Are\n");
 if(f <= r)
 {
 while(f <= r)
 {
printf("%d ",queue[f]);
 f++;
 }
 }
 else
 {
while(f <= max-1)
{
printf("%d ",queue[f]);
f++;
}
f = 0;
while(f <= r)
{
printf("%d ",queue[f]);
f++;
}
printf("\nFront of Queue is: %d",queue[front]);
printf("\nRare of Queue is: %d",queue[rear]);
 }
}
#include<stdio.h>
#include<conio.h>
int a[20][20],visited[20],n,j;
void bfs(int v);
void main()
{
 int i,v;
 clrscr();
 printf("Enter number of vertices : ");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
visited[i] = 0;
 }
 printf("\nEnter the adjacency matrix of graph:\n");
 for(i=0; i<n; i++)
for(j=0; j<n; j++)
 scanf("%d",&a[i][j]);
 printf("\n\nEnter the starting index/vertex: ");
 scanf("%d",&v);
 printf("\n\nBFS : ");
 bfs(v);
 getch();
}
void bfs(int v)
{
 int d,i;
 if(visited[v] == 0)
 {
 visited[v] = 1;
 printf("%d ",v);
 }
 for(i=0; i<n; i++)
 {
 if(a[v][i] == 1 && visited[i] == 0)
 enqueue(i);
 }
 if( !isEmpty() )
 {
 d = dequeue();
 bfs(d);
 }
}
