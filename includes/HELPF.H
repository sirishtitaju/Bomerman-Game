#include<graphics.h>
#include<conio.h>
#include<dos.h>
void help()
{
setcolor(15);
setfillstyle(1,2);
rectangle(5,5,635,470);  //big rectangle
floodfill(45,66,15);
setcolor(3);
setfillstyle(1,3);
rectangle(20,22,620,452); //small rectangle
floodfill(22,38,3);
setcolor(8);
setfillstyle(1,14);
rectangle(550,425,620,452);
floodfill(553,427,8);
outtextxy(568,436,"Back");
setcolor(8);
setfillstyle(1,14);
rectangle(150,40,360,90);    //by rectangle
floodfill(155,45,8);
setcolor(0);
settextstyle(1,0,0);
outtextxy(210,50,"HELP !!!");
settextstyle(1,0,1);
line(240,100,240,180); //vertical
line(200,140,280,140);    //horizontal
line(240,100,235,105);//up
line(240,100,245,105);
line(235,105,245,105);
outtextxy(250,95,"W");

line(240,180,235,175);//down
line(240,180,245,175);
line(235,175,245,175);
outtextxy(250,165,"S");

line(200,140,205,135); //left
line(200,140,205,145);
line(205,135,205,145);
outtextxy(190,140,"A");

line(280,140,275,135);//right
line(280,140,275,145);
line(275,135,275,145);
outtextxy(290,140,"D");
settextstyle(1,0,1);
outtextxy(40,120,"1.Apply");
outtextxy(40,185,"2.Press 'L' key for bomb.");
settextstyle(1,0,1);
outtextxy(40,210,"3.Kill enemies with bomb.");
settextstyle(1,0,1);
outtextxy(40,240,"4.Play the game carefully. ");
outtextxy(40,270,"5.For milti-player :");
line (240,300,240,380);
line(200,340,280,340); //horizontal
line(240,300,235,305); //up
line(235,305,245,305);
line(245,305,240,300);

line(275,335,280,340); //right
line(275,345,280,340);
line(275,335,275,345);

line(200,340,205,335);
line(200,340,205,345);
line(205,335,205,345); //left

line(240,380,245,375);
line(240,380,235,375);
line(245,375,235,375);
//line();
}
