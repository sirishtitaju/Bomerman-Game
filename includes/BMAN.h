#include<graphics.h>
void bman(bw,bh) 
{setcolor(2);
setfillstyle(1,2);
rectangle(bw-16,bh-23,bw+24,bh+15);
floodfill(bw,bh,2);
}