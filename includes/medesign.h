#include<graphics.h>
void medesign()
{
int a=0;
setcolor(8);
setfillstyle(5,2);
rectangle(1,6,630,470);
rectangle(13,18,618,458);
floodfill(3,8,8);
setfillstyle(1,6);
rectangle(13,18,618,458);
floodfill(200,300,8);
settextstyle(0,0,4);
setcolor(0);
outtextxy(200,55,"BOMBERMAN");
setcolor(a);
rectangle(100,120,225,150);  //1st from up
setfillstyle(1,3);
floodfill(105,125,a);
rectangle(100,180,225,210);
floodfill(105,185,a);
rectangle(100,240,225,270);
floodfill(105,245,a);
rectangle(100,300,225,330);
floodfill(105,325,a);
rectangle(100,360,225,390);
floodfill(105,365,a);

ellipse(60,120,160,290,15,10);
line(60,130,86,130);//UPLINE
ellipse(70,124,160,290,15,12);
line(70,136,86,136);//DOWNLINE
line(85,128,90,133); //INCLINE1
line(90,133,85,138); //INCLINE2
ellipse(51,119,180,350,5,3);
floodfill(87,135,a);
floodfill(54,125,a);

ellipse(60,180,160,290,15,10);
line(60,190,85,190);
ellipse(70,184,160,290,15,12);
line(70,196,85,196);
line(85,188,90,193);
line(90,193,85,198);
ellipse(51,179,180,350,5,3);
floodfill(54,185,a);
floodfill(87,195,a);


ellipse(60,240,160,290,15,10);
line(60,250,85,250);
ellipse(70,244,160,290,15,12);
line(70,256,85,256);
line(85,248,90,253);
line(90,253,85,258);
ellipse(51,239,180,350,5,3);
floodfill(54,245,a);
floodfill(87,255,a);

ellipse(60,300,160,290,15,10);
line(60,310,85,310);
ellipse(70,304,160,290,15,12);
line(70,316,85,316);
line(85,308,90,313);
line(90,313,85,318);
ellipse(51,299,180,350,5,3);
floodfill(54,305,a);
floodfill(87,315,a);

ellipse(60,360,160,290,15,10);
line(60,370,85,370);
ellipse(70,364,160,290,15,12);
line(70,376,85,376);
line(85,368,90,373);
line(90,373,85,378);
ellipse(51,359,180,350,5,3);
floodfill(54,365,a);
floodfill(87,375,a);



settextstyle(0,0,0);
setcolor(0);
outtextxy(112,133,"Single PLayer");
outtextxy(115,193,"Multi PLayer");
outtextxy(140,253,"Help");
outtextxy(140,313,"About");
outtextxy(140,373,"Exit");

//arena
setcolor(7);
setfillstyle(9,8);
rectangle(238,100,590,400);
rectangle(248,110,580,390);
floodfill(240,105,7);
setfillstyle(1,2);
rectangle(248,110,580,390);
floodfill(260,120,7);
setfillstyle(1,4);
rectangle(295,160,535,340);
floodfill(300,200,7);
int xx=0;
for(int i=1;i<=25;i++)
{
rectangle(295,160+xx,535,167+xx);
rectangle(295,161+xx,535,168+xx);
xx=xx+7;
}
xx=0;
for(i=1;i<=12;i++)
{
rectangle(295+xx,160,315+xx,340);
rectangle(296+xx,160,316+xx,340);
xx=xx+20;
}
}


