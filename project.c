#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm,i,a;
 clrscr();
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
 circle(20,80,3);
 circle(100,80,3);
 circle(100,20,3);
 circle(20,200,3);
 circle(200,20,3);
 circle(45,105,3);
 circle(200,80,3);
 circle(300,80,3);
 circle(300,20,3);
 circle(120,200,3);
 circle(400,20,3);
 circle(145,95,3);
 circle(300,200,3);
 circle(500,75,20);
 //setbkcolor(BLUE);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(20,80,1);
 floodfill(100,80,1);
 floodfill(100,20,1);
 floodfill(20,200,1);
 floodfill(200,20,1);
 floodfill(45,105,1);
 floodfill(200,80,1);
 floodfill(300,80,1);
 floodfill(300,20,1);
 floodfill(120,200,1);
 floodfill(400,20,1);
 floodfill(145,95,1);
 floodfill(300,200,1);
 floodfill(500,75,1);
 circle(75,360,10);                //mundi
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(75,360,1);
 line(75,370,75,405);
 line(75,375,89,405); //hand
 line(75,375,61,405);
 circle(90,405,5);
 circle(60,405,5);
 floodfill(90,405,1);
 floodfill(60,405,1);
 line(75,405,88,425);
 line(75,405,62,425);
 line(55,425,95,425);
 circle(62,430,5);
 circle(88,430,5);
 line(0,435,getmaxx(),435);
 setcolor(1);
for(i=0;i<1500;i++)
 {
 arc(590-i,301,160,285,55);
 arc(590-i,290,60,200,55);
 arc(630-i,290,340,120,55);
 arc(630-i,301,265,30,55);
 rectangle((getmaxx()-10)-i,435,600-i,331);
 arc(1090-i,301,160,285,55);
 arc(1090-i,290,60,200,55);
 arc(1130-i,290,340,120,55);
 arc(1130-i,301,265,30,55);
 rectangle((1130)-i,435,1100-i,331);
 settextstyle(2,0,10);
 outtextxy(50-i,200,"START");
 outtextxy(1600-i,200,"STOP");
 rectangle(1600-i,435,1605-i,300);
 line(1605-i,300,1630-i,320);
 line(1605-i,340,1630-i,320);
 floodfill(1615-i,310,1);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(1601-i,350,1);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(600-i,285,1);
 floodfill(1100-i,285,1);
 setfillstyle(SOLID_FILL,RED);
 floodfill(615-i,400,1);
 floodfill(1115-i,400,1);
 floodfill(62,430,1);
 floodfill(88,430,1);
  delay(1);
 //cleardevice();
 }
 setfillstyle(SOLID_FILL,BROWN);
 floodfill(getmaxx()-10,getmaxy()-10,1);
 
 getch();
 closegraph();
 }