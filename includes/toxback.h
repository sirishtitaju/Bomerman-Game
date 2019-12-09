#include<graphics.h>
void toxback(int tox,int toy)
{
         setcolor(2);
	 setfillstyle(1,2);
	rectangle(tox+17,toy+18,tox-17,toy-20);
	floodfill(tox,toy,2);
}