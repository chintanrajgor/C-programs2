#include<stdio.h>
#include<conio.h>
#define max 50
int stack[20];
int top = -1;
void push(int stack[max],int X)
{
 if(top == -1)
 {
 top++;
 stack[top] = X;
 }
 else if(top == max-1)
 {
 printf("\nStack Over-Flow");
 }
 else
 {
 top++;
 stack[top] = X;
 }
}
int pop(int stack[max])
{
 int t;
 if(top == -1)
 printf("\nStack Under-FLow");
 else
 {
 top--;
 return (stack[top+1]);
 }
 return stack[top];
}
void display(int stack[max])
{
 int i;
 printf("\nElements in stack is: \n");
 for(i=top; i>=0; i--)
printf("%d ",stack[i]);
}
int Exist(int element)
{
 int i;
 for(i = top; i>=0; i--)
 {
 if(stack[i] == element )
 return 1;
 }
return 0;
}
int Exists(int v[10],int ver,int a)
{
 int i;
 for(i = 0; i<ver; i++)
 {
 if(v[i] == a )
 return 1;
 }
return 0;
}
void main()
{
 int ver,i,j,t;
 int adj[10][10];
 int visited[10],v=0,temp;
 clrscr();
 printf("Enter number of vertices : ");
 scanf("%d",&ver);
 printf("\nEnter the adjacency matrix:\n");
 for(i=0; i<ver; i++)
for(j=0; j<ver; j++)
 scanf("%d",&adj[i][j]);
 printf("\n\nEnter the starting index: ");
 scanf("%d",&t);
 printf("DFS: %d ",t);
 visited[v++] = t;
 do
 {
for(i=0; i<ver; i++)
{
 if(adj[t][i] == 1)
 if( Exist(i) == 0 )
if( Exists(visited,ver,i) == 0 )
 push(stack,i);
}
t = visited[v++] = pop(stack);
printf(" %d ",t);
 }while(top != -1);
 getch();
}