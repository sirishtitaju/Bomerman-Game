#include<graphics.h>
#include<conio.h>
#include<dos.h>
void about()
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
rectangle(110,40,360,100);    //by rectangle
floodfill(115,45,8);
setfillstyle(1,14);
rectangle(550,425,620,452);
floodfill(553,427,8);
outtextxy(568,436,"back");
setcolor(0);
settextstyle(1,0,0);
outtextxy(120,50,"DEVELOPED BY");
delay(1000);
settextstyle(1,0,3);
outtextxy(45,110,"Krishna Dev Adhikari Danuwar");
delay(1000);
settextstyle(1,0,3);
outtextxy(45,160,"Kushal Badal");
delay(1000);
settextstyle(1,0,3);
outtextxy(45,210,"Simanta Karki");
delay(1000);
settextstyle(1,0,3);
outtextxy(45,260,"Sirish Titaju");
delay(1000);
}
