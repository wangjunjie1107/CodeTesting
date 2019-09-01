#include<stdio.h>
#include<math.h>
#include<graphics.h>  //Í¼¿âÍ·ÎÄ¼þ 

int main()
{
	int driver,mode;
	int i, maxx, maxy, x, y, r, colormax;
	
	detectgraph(&driver,&mode);
	initgraph(&driver,&mode,"");
	
	maxx = getmaxx() / 2;
	maxy = getmaxy() / 2;
	r = maxx < maxy ? maxx : maxy;
	colormax = getmaxcolor();
	
	for(i = 0; i < 360; i++)
	{
		setcolor(i % colormax + 1);
		x = maxx + r * sin(i * 3.1416 / 180);
		y = maxy + r * cos(i * 3.1416 / 180);
		line(maxx,maxy,x,y);
		delay(10000);
	}
	
	sleep(1);
	
	for(i = 0; i < 360; i++)
	{
		setcolor(i % 3 + 1);
		x = maxx + r * sin(i * 3.1416 / 180);
		y = maxy + r * cos(i * 3.1416 / 180);
		line(maxx,maxy,x,y);
		delay(10000);
	}
	
	sleep(1);
	setcolor(getbkcolor());
	
	for(i = 0; i < 360; i++)
	{
		x = maxx + r * sin(i * 3.1416 / 180);
		y = maxy + r * cos(i * 3.1416 / 180);
		line(maxx,maxy,x,y);
		delay(10000);
	}
	
	closegraph();
	
} 
 
 
 
 
 
 
