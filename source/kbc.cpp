/*KAUN BANEGA CROREPATI.*  Borland C++ 3.0

   Copyright (c) 2001 - ? VINOD KOTIYA International. All rights reserved.

   From the command line, use:

		VKK KBC graphics.lib
*/
#include<dos.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
void display();
int rule();
int kbcgame();
void wrong();
char right(int);
void rupees(int);
void vin();

void main(void)
{   //int gd=DETECT,gm;char a;
    //initgraph(&gd,&gm,"c:\\tc\\bgi");
    //setbkcolor(BLUE);
    int ch;
    vin();
    delay(3000);
    display();
    ch= rule();
    if(ch==1)
    ch=kbcgame();

}
    void rupees(int i)
 {
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
    setbkcolor(BLUE);
    cout<<"\n\n\n\t\t\t\t\t\t\t     Rs 1,00,00,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 50,00,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 25,00,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 12,50,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 6,40,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 3,20,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 1,60,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 80,1000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 40,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 20,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 10,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 5,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 3,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 2,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 1,000/-\n";
    cout<<"\t\t\t\t\t\t\t     Rs 0\n";
    gotoxy(58,19-i);
    //outtext("->");

    cout<<"=>>";
    for(int j=0;j<i;j++)
     cout<<"\n";
     cout<<"\n********************************************************************************";
    cout<<"\t\t     WANT TO USE ANY HELP LINE\n\n";
    cout<<"\t1)50:50 \t 2)PHONE A FRIEND \t 3)COMPUTER`s VIEW\n";
    cout<<"********************************************************************************";
    settextstyle(3,DEFAULT_FONT,5);
    outtextxy(30,400," KAUN BANEGA CROREPATI");

 }

char right(int x)
{ char c;
  cout<<"\n  SAHI JAWAB";
  cout<<"\n\n    YOU WIN Rs.";
  if(x <6)
  {int r =x *1000;
  cout<<r<<"/-\n";}
  else if(x == 6)
  {cout<<"10000/-     CONGRATULATIONS";
      cout<<"\nYOU CLEARED FIRST STAGE\n";
      cout<<"NOW YOU WILL TAKE ATLEAST Rs 10,000/- FROM HERE";
   }
   cout<<"\n\n       WANT TO CONTINUE Y/N";
      c = getche();
   return(c);

}
 void wrong()
 {
  cout<<"\t\t\n AFSOS !!! \n\n  YEH GALAT JAWAB HAI \n\n  YOU CAN`T WIN\n";
  getch();
 }

    int rule()
  { int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    setbkcolor(MAGENTA);
    char h,ch ;
     clearviewport();
     cout<<" \n\n\n\t              READ THE FOLLOWING RULES PROPERLY";
     cout<<"\n\n  RULE #1:";
     cout<<"\n\n  RULE #2:";
     cout<<"\n\n  RULE #3:";
     cout<<"\n\n  RULE #4:";
     cout<<"\n\n\n\n\n\t\t       ARE YOU READY Y/N";
     ch = getche();
     if(ch=='n'||ch=='N')
     return 0;
     else
     return 1
     ;
     }
void display()
{

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");

    settextstyle(3,DEFAULT_FONT,5);
      textcolor(MAGENTA+128);
    setbkcolor(RED);
    outtextxy(30,200," KAUN BANEGA CROREPATI");       // delay(15555);
    settextstyle(SMALL_FONT,0,5);
    setcolor(YELLOW);
    outtextxy( 210,250,"PRESS ENTER TO PLAY");
    getch(); //closegraph();

}

void vin()
{  int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");

    settextstyle(TRIPLEX_FONT,0,5);
      setcolor(RED);
    setbkcolor(LIGHTGREEN);
    outtextxy(0,210," presented by VINOD KOTIYA ");
    outtextxy(0,245,"****************************************************");
 }
      int kbcgame()
{   int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");

  setbkcolor(BLUE);
     int ch,i=0;
     char a,c;
     clrscr();
     rupees(i);
     gotoxy(1,4);
     cout<<" QUESTION 1: Where is the biggest tunnel of the world\n\n";
     cout<<" A) JAPAN                                 B) U.S.A.\n";
     cout<<" C) INDIA               		  D)NONE\n";
     a=getche();
       if(a!='a'&&a!='A')
	wrong();
       else
      {
      i++;
      c=right(i);

     if(c=='Y'||c=='y')
{    clrscr();
     rupees(i);
     gotoxy(1,4);
     cout<<" QUESTION 2: Which is the biggest country in the world\n\n";
     cout<<" A) india           	                    B)china\n";
     cout<<" C) uk               		            D)usa\n";
     a = getche();
     if(a!='B'&&a!='b')
      wrong();
    else
    { i++;
      c = right(i);
      if(c=='y'||c=='Y')
   { clrscr();
     rupees(i);
     gotoxy(1,4);
     cout<<" QUESTION 3: Who is the first Lady Prime Minister of INDIA\n\n";
     cout<<" A) J.L.NEHRU                          B)KIRAN BEDI\n";
     cout<<" C) INDIRA GANDHI      		   D)SAROJNI NAIDU\n";
     a = getche();
     if(a!='C'&&a!='c')
    wrong();
     else
    { i++;
      c = right(i);
       if(c=='y'||c=='Y')
   { clrscr();
     rupees(i);
     gotoxy(1,4);
     cout<<" QUESTION 4: Which is the first country to launch rocket \nin space\n\n";
     cout<<" A) U.S.S.R.                         B)SOUTH AFRICA\n";
     cout<<" C) POLAND      		         D)FRANCE\n";
     a = getche();
     if(a!='a'&&a!='A')
      wrong();
      else
    { i++;
      c = right(i);
      if(c=='y'||c=='Y')
   { clrscr();
     rupees(i);
     gotoxy(1,4);
     cout<<" QUESTION 5: In Which country aphil tower is situated\n\n";
     cout<<" A) IRAN                             B)FRANCE\n";
     cout<<" C) HOLAND      		         D)CHINA\n";
     a = getche();
     if(a!='b'&&a!='B')
     wrong();
     else
    { i++;
      c = right(i);
      if(c=='y'||c=='Y')
   { clrscr();
     rupees(i);
     gotoxy(1,4);
     cout<<" QUESTION 6: Who INVENTED TELEFONE\n\n";
     cout<<" A) GRAHM BELL                        B)MARCONI\n";
     cout<<" C) BOTH      		          D)NONE\n";
     a = getche();
	if(a!='a'&&a!='A')
	  wrong();
       else
       { i++;
      c = right(i);
      if(c=='y'||c=='Y')
      return(1);


   else if(c=='n'||c=='N')
   {cout<<"\nYOU WIN RS 10,000/-";
    getch();
   }
    }   }
   else if(c=='n'||c=='N')
  { cout<<"\n YOU WIN Rs 5000/-";
    getch();
   }
   }   }
   else if(c=='n'||c=='N')
  { cout<<"\nYOU WIN Rs 4000/-";
     getch();
   }
  }   }
   else if(c=='n'||c=='N')
  { cout<<"\nYOU WIN Rs 3000/-";
    getch();
   }
 } }
  else if(c=='n'||c=='N')
  {cout<<"\nYOU WIN Rs 2000/-";
    getch();
   }
 } }
  else if(c=='n'||c=='N')
  {cout<<"\nYOU WIN Rs 1000\-";
    getch();
   }
   }
}

