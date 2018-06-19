#include <iostream.h>
#include<fstream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <process.h>
/****************************************************************************
			FUNCTION TO INITIALISE GRAPHIC DRIVERS
****************************************************************************/
void init()
{
 /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int maxx, maxy;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");


   cleardevice();



}
/****************************************************************************
			FUNCTION TO SHOW FIRST PAGE
****************************************************************************/
void first()
{
	init();
	ellipse(310,240,0,360,150,170);
	ellipse(310,240,0,360,160,180);
	//setbkcolor(CYAN);
	floodfill(152,240,getmaxcolor());
	//outtextxy(150,240,".");
	setcolor(WHITE);
	ellipse(310,240,0,360,190,210);
	//horizontal lines
	line(270,150,340,150);
	line(270,149,340,149);
	line(270,148,340,148);
	line(270,330,340,330);
	line(270,331,340,331);
	line(270,332,340,332);
	//vertical lines
	/*line(413,200,413,280);
	line(415,200,415,280);
	line(207,200,207,280);
	line(209,200,209,280);    */
	//rupee sign
	//lower
	ellipse(295,330,-90,0,30,40);
	ellipse(295,330,-90,0,31,41);
	ellipse(295,330,-90,0,32,42);
	//upper
	ellipse(315,150,-270,-180,30,40);
	ellipse(315,150,-270,-180,31,41);
	ellipse(315,150,-270,-180,32,42);
	/*//left right
	//right
	ellipse(413,250,0,90,30,30);
	ellipse(413,250,0,90,28,28);
	//left
	ellipse(210,230,-180,-90,30,30);
	ellipse(210,230,-180,-90,28,28);    */
	//last touch
	//lower
	line(295,369,325,399);
	line(295,370,325,400);
	line(295,371,325,401);
	//upper
	line(285,79,315,109);
	line(285,78,315,108);
	line(285,77,315,107);
	//writings
	settextstyle(1, HORIZ_DIR,2);
	outtextxy(165,110,"K");
	outtextxy(195,70,"A");
	outtextxy(225,50,"U");
	outtextxy(265,40,"N");
	outtextxy(315,30,"B");
	outtextxy(345,40,"A");
	outtextxy(375,50,"N");
	outtextxy(405,70,"E");
	outtextxy(435,100,"G");
	outtextxy(455,130,"A");
	outtextxy(165,350,"K");
	outtextxy(195,380,"A");
	outtextxy(225,400,"U");
	outtextxy(265,420,"N");
	outtextxy(315,420,"B");
	outtextxy(345,415,"A");
	outtextxy(375,405,"N");
	outtextxy(405,390,"E");
	outtextxy(435,360,"G");
	outtextxy(455,320,"A");

	settextstyle(4, HORIZ_DIR,7);
	outtextxy(200,180,"Crorepati");
	settextstyle(4, HORIZ_DIR,3);
	outtextxy(248,170,"kaun banega");
	outtextxy(248,250,"kaun banega");
	floodfill(152,100,getmaxcolor());
}
/****************************************************************************
			FUNCTION TO SHOW MAIN PAGE
****************************************************************************/
void kbc()
{
	init();
	setbkcolor(BLACK);
	setcolor(YELLOW);
	line(40,40,600,40) ;
	line(1,80,10,80);
	line(10,80,40,40);
	line(40,120,600,120);
	line(10,80,40,120);
	line(630,80,650,80);
	line(600,40,630,80);
	line(600,120,630,80);
	//
	line(50,200,250,200);
	line(400,200,600,200);
	line(1,215,20,215);
	line(20,215,50,200);
	line(20,215,50,230);
	line(280,215,370,215);
	line(280,295,370,295);
	line(370,215,400,230);
	line(370,215,400,200);
	line(370,295,400,310);
	line(370,295,400,280);
	line(1,295,20,295);
	line(20,295,50,280);
	line(20,295,50,310);
	line(650,215,630,215);
	line(650,295,630,295);
	line(50,230,250,230);
	line(250,230,280,215);
	line(250,200,280,215);
	line(400,230,600,230);
	line(600,200,630,215);
	line(600,230,630,215);
	line(600,280,630,295);
	line(600,310,630,295);
	line(50,280,250,280);
	line(250,280,280,295);
	line(250,310,280,295);
	line(400,280,600,280);
	line(50,310,250,310);
	line(400,310,600,310);
	//circle(600,440,30);
}
/****************************************************************************
				MAIN CLASS
****************************************************************************/
class question
{
	char q[50];
	char ch1[20];
	char ch2[20];
	char ch3[20];
	char ch4[20];
	char co;
	public:
	void readq()
	{
		cout<<"Enter question:\n";
		gets(q);
		cout<<"\nEnter choice (a):";
		gets(ch1);
		cout<<"\nEnter choice (b):";
		gets(ch2);
		cout<<"\nEnter choice (c):";
		gets(ch3);
		cout<<"\nEnter choice (d):";
		gets(ch4);
		cout<<"\nEnter correct choice:";
		cin>>co;
	}
	void dispq();

}ob;
void amitabh()
{
	init();
	line(350,1,350,500);
	rectangle(450,50,575,175);
	ellipse(512,115,-60,-120,25,35);
	ellipse(512,185,37,80,80,40);
	ellipse(512,185,100,141,80,40);
}
void question::dispq()
	{
		re:
		kbc();
		char c;
		gotoxy(10,5);
		cout<<q;
		gotoxy(10,14);
		cout<<"(a) "<<ch1;
		gotoxy(54,14);
		cout<<"(b) "<<ch2;
		gotoxy(10,19);
		cout<<"(c) "<<ch3;
		gotoxy(54,19);
		cout<<"(d) "<<ch4;
		gotoxy(10,25);
		cout<<"Your choice?";
		c=getch();
		closegraph();
		clrscr();
		/*amitabh();
		cout<<"\n\n\tSURE?.......";
		getch();
		cout<<"\n\n\tConfident?.......";
		getch();
		char c2;
		cout<<"\n\n\tLock kiya jai?(Y/N)";
		c2=getch();
		if(c2=='y'||c2=='Y')
		{
		cout<<"\n\nTo computer ji "<<c<<" ko lock kiya jai...";
		cout<<endl;
		for(int i=0;i<10;i++)
		{
		delay(500);
		cout<<".";
		}
		//delay(2000);
		if(c==co)
		cout<<"\nCorrect answer";
		else
		cout<<"\nIncorrect answer";
		}
		else
		goto re;    */
	}
void add()
{
	ofstream fout("ques.dat",ios::binary);
	char ch;
	do
	{
	ob.readq();
	fout.write((char*)&ob,sizeof(ob));
	cout<<"\n\nEnter more?(Y/N)";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
}
void disp()
{
	int i=0;
	setbkcolor(BLACK);
	ifstream fin("ques.dat",ios::binary);
	if(fin.eof())
	cout<<"FILE CANNOT BE OPENED";
	while(fin)
	{
		fin.read((char*)&ob,sizeof(ob));
		i++;
		int z=random(2)+1;
		if(i==z)
		ob.dispq();
	}

}
void main()
{
	first();
	getch();
	kbc();
	getch();
}