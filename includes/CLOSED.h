#include<graphics.h>
void closed()
{
setcolor(4);
setfillstyle(1,8);
rectangle(560,230,600,270);
floodfill(562,233,4);
line(580,240,580,260);
line(560,230,580,240);
line(580,240,600,230);
line(580,260,560,270);
line(580,260,600,270);
}
