#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm,i,j;
int a[12][10]={
{1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,1,1,1},
};
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(i=0;i<12;i++)
{
 for(j=0;j<10;j++)
 {
  putpixel(200+j,200+i,BLUE*a[i][j]);
  }
  }
  getch();
  closegraph();
  return 0;
  }
