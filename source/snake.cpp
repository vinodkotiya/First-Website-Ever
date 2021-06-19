#include<stdio.h>
#include<graphics.h>
#include<bios.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#define up 72
#define down 80
#define left 75
#define right 77
struct snk
{
	int x,y;
}s[200];
struct eat
{
	int a,b;
}e[100];
struct bomb
{
	int bx,by;
}b[100];
int n,c1,c2,l,m,k,life=3,level=1,flag,dly,comp=1;
int speed=20;  /* controls the speed of the game */
long score,lvlchg=500,lmt=150;

main()
{
	int gm,gd=DETECT,i,j;
	char ch;
	void print(),move(),border(),allien(),compare(),late();
	void prn_scr(),bombblink(),setlife(),tail(),head(),gameover(),bombs();
	void levels(),directions();
	initgraph(&gd,&gm,"");

	while(1)
	{
		life=3;
		n=5;
		cleardevice();
		head();
		lmt=150;
		directions();
		allien();
		border();
		bombs();
		settextstyle(0,0,1);
		while(1)
		{
			setlife();
			c1=c2=right;
			for(i=0;i<n;i++)
			{
				s[i].x=250-i*10;
				s[i].y=100;
			}
			border();
			for(j=0;;j++)
			{
				if(j>=5)
				{
					print();
					move();
					compare();
					late();
					levels();
					bombblink();
					 if(level>10)
					   {
					     life=0;
					     cleardevice();
					     settextstyle(2,0,10);
					     outtextxy(100,200,"YOU ARE THE WINNER");
					     delay(10000);
					     getch();
					     break;
					   }
					tail();
					if(flag==1)
					{
						flag=0;
						break;
					}
				}
			}
			if(life<=0)
			break;
		}
		gameover();
		settextstyle(1,0,5);
		outtextxy(50,100,"ARE YOU INTERESTED?(Y/N) : : ");
		level=1;
		lvlchg=500;
		fflush(stdin);
		while(1)
		{
			ch=getch();
			if(ch=='y' || ch=='Y')
			break;
			if(ch=='n' || ch=='N')
			exit(0);
		}
	}
	closegraph();
	return 0;
}

void print()   /* To print body of the Snake */
{
	int i;
	settextstyle(0,0,1);
	setcolor(0);
	outtextxy(l,m,"*");
	setcolor(9);
	for(i=0;i<n;i++)
	{
		outtextxy(s[i].x,s[i].y,"*");
		if(i==0)
		{
			setcolor(0);
			outtextxy(s[i].x,s[i].y,"*");
			delay(100);       //0
			setcolor(12);
			outtextxy(s[i].x,s[i].y,"*");
		}
		setcolor(9);
	}
}

void move()        /* To give moment to the Snake */
{
	unsigned ch;
	int i,r;
	l=s[n-1].x;
	m=s[n-1].y;
	for(i=n-1;i>0;i--)
	{
		s[i].x=s[i-1].x;
		s[i].y=s[i-1].y;
	}

		if(!kbhit())
		{
			delay(10);   //dly
		}
		else
		{
			c2=c1;
			ch=bioskey(0);
			c1=ch>>8;
			if(c1!=left && c1!=right && c1!=up && c1!=down)
			c1=c2;
			if(c1==left && c2==right)
			c1=c2;
			if(c1==up && c2==down)
			c1=c2;
			if(c1==right && c2==left)
			c1=c2;
			if(c1==down && c2==up)
			c1=c2;
		}
		switch(c1)
		{
			case up:
				s[0].y=s[0].y-10;
				break;
			case down:
				s[0].y=s[0].y+10;
				break;
			case right:
				s[0].x=s[0].x+10;
				break;
			case left:
				s[0].x=s[0].x-10;
				break;
			case 27:
			exit(0);
			default:
				break;
			}
}

void border()        /* To draw the border(walls) */
{
	int i,j;
	setcolor(RED);
	settextstyle(0,0,1);
	for(i=20,j=20;i<=620;i+=10)
	{
		outtextxy(i,j,"*");
		outtextxy(i,j+400,"*");
	}
	for(i=20,j=20;i<=420;i+=10)
	{
		outtextxy(j,i,"*");
		outtextxy(j+600,i,"*");
	}
	setcolor(3);
}

void allien()            /* To put the Preys */
{
	int i;
	setcolor(5);
	settextstyle(0,0,1);
	for(i=1;i<=5*level;i++)
	{
		e[i].a=random(58)*10+30;
		e[i].b=random(39)*10+30;
		outtextxy(e[i].a,e[i].b,"*");
	}
	setcolor(3);
}
/* To check weather the snake has eaten the preys or
came accross the bombs or collides the walls          */
void compare()
{
	int i,j;
	void lostlife(),dead_snk(),prn_scr(),lifeinc();
	if(s[0].x<=20 || s[0].x>=620 || s[0].y<=25 || s[0].y>=420)
	{
		life=life-1;
		n=10;
		dead_snk();
		for(i=1;i<100;i++)
		{
			sound(1000+i*10);
			delay(200);
			nosound();
		}
		lostlife();
	}
	for(i=1;i<=5*level;i++)
	{
		if((s[0].x==e[i].a && s[0].y==e[i].b))
		{
			setcolor(0);
			outtextxy(e[i].a,e[i].b,"*");
			e[i].a=random(58)*10+30;
			e[i].b=random(39)*10+30;
			setcolor(5);
			outtextxy(e[i].a,e[i].b,"*");
			setcolor(3);
			score+=5;
			n++;
			s[n].x=s[n].y=0;
			prn_scr();
			sound(2000);
			delay(500);
			nosound();
			lifeinc();
		}
	}
	for(j=0;j<5*level;j++)
	{
		if((s[0].x==b[j].bx && s[0].y==b[j].by))
		{
			dead_snk();
			for(i=0;i<=100;i++)
			{
			     sound(600+i*10);
			     delay(100);
			     nosound();
			 }
			 delay(100);    //10000
			 life--;
			 lostlife();
		}
	}
}
/* To print a message when the snake
has lost its life                 */
void lostlife()
{
	char t,s[10];
	cleardevice();
	flag=1;
	setcolor(9);
	settextstyle(3,0,5);
	outtextxy(20,200,"OOPS! YOU LOST A LIFE");
	settextstyle(2,0,8);
	outtextxy(30,400,"ENTER TO CONTINUE");
	setcolor(3);
	while(1)
	{
		t=getch();
		if(t==13)
		{
			break;
		 }
	 }
	settextstyle(0,0,1);
	cleardevice();
	allien();
}

void prn_scr()       /* To update the score */
{
	char str[20];
	settextstyle(0,0,2);
	sprintf(str,"score %ld",score-5);
	setcolor(0);
	outtextxy(400,450,str);
	sprintf(str,"score %ld",score);
	setcolor(3);
	outtextxy(400,450,str);
	settextstyle(0,0,1);
	return;
}

void dead_snk()     /* To indicate the collission */
{
	int i,j,xco,yco;
	for(i=s[0].x,j=s[0].y;i<=s[0].x+100;i++,j++)
	{
		xco=random(i+20);
		yco=random(j+20);
		if(xco<=s[0].x+20 && xco>=s[0].x-20&&yco<=s[0].y+20 && yco>=s[0].y-20)
		{
				putpixel(xco,yco,10);
				putpixel(xco+1,yco+1,4);
		}
		else
		{
			i--,j--;
		}
		setcolor(3);
	}
	n=15;
}

void setlife()        /* To update the number of lifes */
{
	int i,xs=100;
	for(i=1;i<=life;i++)
	{
		settextstyle(0,0,2);
		outtextxy(10,450,"LIFE:");
		outtextxy(xs,450,"\f");
		xs+=20;
	}
	settextstyle(0,0,1);
}

void tail()         /*  To check weather the snake made a collission to itself */
{
	  int i,j;
	  for(i=3;i<n;i++)
	  {
		if(s[0].x==s[i].x && s[0].y==s[i].y)
		{
			dead_snk();
			life=life-1;
			for(j=0;j<=10;j++)   //30
			{
				sound(300+j*10);
				delay(50*j);  //50
				n=10;
			}
			nosound();
			lostlife();
		}
	  }
}

void head()                /* To print the Title of the game */
{
	int i,j;
	settextstyle(0,0,1);
	setcolor(BLUE);
	for(i=0;i<=100;i++)
	{
		outtextxy(random(700),random(450),".");
	}
	for(i=0,j=500;i<=250;i+=5,j-=5)
	{
		settextstyle(1,0,7);
		setcolor(10);
		outtextxy(i,150,"S A E");
		outtextxy(j,150," N K ");
		setcolor(0);
		sound(200+j*10);
		delay(30);   //500
		outtextxy(i,150,"S A E");
		outtextxy(j,150," N K ");
	}
	setcolor(10);
	settextstyle(1,0,7);
	nosound();
	outtextxy(j,150,"SNAKE");
	settextstyle(1,0,2);
	for(i=340,j=340;i<=440;i+=5,j-=5)
	{
		outtextxy(i,210,"*");
		outtextxy(j,210,"*");
		delay(300);    //2000
	}
	setcolor(1);
	outtextxy(10,450,"VINOD ");
	outtextxy(500,450," VINNER");
	settextstyle(0,0,1);
	setcolor(BLUE);
	for(i=0;i<=100;i++)
		outtextxy(random(700),random(450),".");
	getch();
	cleardevice();
	settextstyle(0,0,1);
	setbkcolor(0);
 }

void gameover()            /* To indicate that game is over */
{
	int i,j,k=100;
	char *s[10]={"G","A","M","E"," ","O","V","E","R","!"};
	cleardevice();
	level=1;
	settextstyle(3,0,4);
	settextstyle(2,0,10);
	for(i=0;i<10;i++)
	{
		k+=35;
		for(j=600;j>=k;j-=5)
		{
			sound(random(2000));
			setcolor(10);
			outtextxy(j,150,s[i]);
			setcolor(0);
			outtextxy(j,150,s[i]);
			delay(random(100));          //100
			nosound();
		}
		setcolor(10);
		outtextxy(j,150,s[i]);
	}
	prn_scr();
	score=0;
	delay(3000);
	cleardevice();
}

void bombs()        /* To print the bombs */
{
	int i,j;
	settextstyle(0,0,1);
	for(i=0;i<5*level;i++)
	{
		b[i].bx=random(58)*10+30;
		b[i].by=random(39)*10+30;
		setcolor(YELLOW);
		outtextxy(b[i].bx,b[i].by,"*");
	}
	setcolor(3);
}

void bombblink()              /* To blink the bombs */
{
	int i,j;
	settextstyle(0,0,1);
	for(i=0;i<5*level;i++)
	{
		setcolor(GREEN);
		outtextxy(b[i].bx,b[i].by,"*");
		delay(30);
		setcolor(YELLOW);
		outtextxy(b[i].bx,b[i].by,"*");
	}
	setcolor(3);
}

void levels()       /*  To set the level of the game */
{
	int i,j;
	char ch;
	char s[10];
	if(score>lmt)
	{
		sprintf(s,"LEVEL %d",level);
		setcolor(0);
		outtextxy(200,450,s);
		level++;
		lmt+=200;
		setcolor(3);
		cleardevice();
		settextstyle(2,0,10);
		outtextxy(100,100,"YOU CROSSED A LEVEL");
		outtextxy(100,300,"ENTER TO CONTINUE....");
		while(1)
		{
			ch=getch();
			if(ch==13)
			break;
		}
		cleardevice();
		allien();
		border();
		bombs();
		setlife();
		print();
		delay(100000);
	}
	sprintf(s,"LEVEL %d",level);
	outtextxy(250,450,s);
}
void directions()           /* To print the rules of the game */
{
	char ch;
	cleardevice();
	settextstyle(1,0,1);
	setcolor(CYAN);
	rectangle(50,100,600,400);
	setfillstyle(LTSLASH_FILL,YELLOW);
	floodfill(40,40,CYAN);
	textattr(7+BLINK);
	setcolor(GREEN);
	outtextxy(60,110,"Control the snake without touching the walls and yellows\n");
	outtextxy(60,160,"Use arrow keys to control the movement\n");
	outtextxy(60,210,"Make the snake to eat pink preys to increase the score\n");
	outtextxy(60,260,"You have three lives to go\n");
	outtextxy(60,310,"Press enter to continue...");
	while(1)
	{
		ch=getch();
		if(ch==13)
		break;
	}
	cleardevice();
	textattr(07);
	setcolor(3);
}

void lifeinc()          /* To increment the number of lifes */
{
	char ch;
	if(score>lvlchg)
	{
		life=life+1;
		cleardevice();
		settextstyle(3,0,5);
		outtextxy(100,200,"YOU HAVE GOT A LIFE");
		lvlchg+=500;
		while(1)
		{
			ch=getch();
			if(ch==13)
			break;
		 }
		 cleardevice();
		setlife();
		prn_scr();
		bombs();
		allien();
		border();
		print();
		delay(5000);
	}
}

void late()         /* To adjust the speed in the game */
{
	delay(speed);
	if( comp==level)
	{
		comp++;
		if(speed>150)
			speed-=100;
      }
}
