//  **************************************************************************
//  *******************  Author : Vinod Kotiya *******************************
//  ************ B.E.2nd yr(Information Technology) **************************
//  ***************** Bhopal Engg College Bhopal *****************************
//  ************ copywrite:August2002.All Rights Unreserved ******************
//  *********** compeletion date :- 06/10/2002 to 07/10/2002 *****************
//  ******** Compeletion time :- 4.30 Hrs.(9.00 pm to 1.30 am) ***************
//  *******Address:- s-2 shrimaya apartment sector-b/363 sarvdharm ***********
//  **************** Colony ,Bhopal Fone: +91-0755-794428 ********************
//  **************************************************************************
//  Note:- confirm that you must have supported files EGAVGA.BGI,TRIP.CHR & LITT.CHR
//         (distributed with exe) In the
//         same folder of exe. othervise application will not run properly
//         If you alter any thing in the code,any problem may arise
//    Inspired from :- 11th Physics "M.P.Pathya Pustak Nigam"

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
#include<ctype.h>
//                  sa      re      ga       ma        pa    dha    ni    saa
// cont intervals    -      9/8     10/9    16/15      9/8   10/9   9/8    16/15
// from funda       1/1     9/8     5/4     4/3        3/2   5/3    15/8   2/1
class sangeet;           //generate music

void creator();          //displays
void title();            //displays
void aboutme();          //displays
void help();             //displays
inline void sitare(int); //displays
void savingmove();       //displays

int dhun();              //music generation normal mode
int user();              //music generation advanced mode
void vintune();          //music generation automation mode
void loadfile();         //music generation by playing file mode
void sanchay();          //music generation will saved

int dot = 0;             //displays
char keysave[10000];     //sanchay
int save = 0;            //sanchay switch


char *s[12]={"V","I","N","O","D"," ","K","O","T","I","Y","A"};

void main()
{nosound();

 int gm,gd=DETECT,vin = 6;
 initgraph(&gd,&gm,"");
 clrscr();
 creator();
 while(vin !=0)             //8(9help,23 vintune,17load) for user
 {                          //6(10help,24 vintune,18load) for dhun
  if(vin == 6)
    vin = dhun();
  else if (vin == 8)
    vin = user();
  else if(vin == 9)
    {
     help();
     vin = 8;              //user evokes me jaise ko taisa
    }
  else if (vin == 10)
    {
     help();
     vin = 6;              //dhun evokes me jaise ko taisa
     }
  else if(vin == 23)
     {
      vintune();
      vin = 8;             //user evokes me jaise ko taisa
     }
  else if (vin == 24)
    {
     vintune();
     vin = 6;              //dhun evokes me jaise ko taisa
    }
  else if(vin == 17)
    {
     loadfile();
     vin = 8;              //user evokes me jaise ko taisa
    }
  else if (vin == 18)
    {
     loadfile();
     vin = 6;              //dhun evokes me jaise ko taisa
    }
 }
 aboutme();
 cleardevice();
 closegraph();
}

class sangeet
{
  //char sa[3] = {"QAZ"},re[3] = {"WSX"},ga[3] = {"EDC"},ma = {"RFV"};
  //char pa[3] = {"TGB"},dha[3] = {"YHN"},ni[3] = {"UJM"},saa[3] = {"IK<"};
  char keys2[10] ,keys1[8] ;
  long int hz;
public:
  sangeet()
  {
   strcpy(keys2,"ZXCVBNM<,");
   strcpy(keys1,"QWERTYUI");
   }
  void search_play(char ,long int );
};

void sangeet :: search_play(char sur,long int freq)
{
  char *ptr;
  ptr = strchr(keys1, sur);  //return nonzero if sur is present in key1
  if (ptr !=0)
     freq = freq+398;
  else
     {
      ptr = strchr(keys2,sur);
       if (ptr !=0)
	freq = freq + 964;
     }

  if( sur == 'A'|| sur == 'Q'|| sur == 'Z')
   sound(freq);
  else if ( sur == 'S'|| sur == 'W'|| sur == 'X')
   {
    hz = (freq * 9)/8;
    sound(hz);
   }
  else if ( sur == 'D'|| sur == 'E'|| sur == 'C')
   {
    hz = (freq *5)/4;
    sound(hz);
    }
  else if ( sur == 'F'|| sur == 'R'|| sur == 'V')
    {
     hz = (freq *4)/3;
     sound(hz);
    }
  else if ( sur == 'G'|| sur == 'T'|| sur == 'B')
    {
     hz = (freq *3)/2;
     sound(hz);
    }
  else if ( sur == 'H'|| sur == 'Y'|| sur == 'N')
    {
     hz = (freq *5)/3;
     sound(hz);
    }
  else if ( sur == 'J'|| sur == 'U'|| sur == 'M')
    {
     hz = (freq *15)/8;
     sound(hz);
    }

  else if ( sur == 'K'|| sur == 'I'|| sur == ','|| sur == '<')
    {
     hz = (freq *2);
     sound(hz);
    }
}

int dhun()
{
 char key,v = *s[5];
 title();
 int j = 0;//keysave
 sangeet objdhun;
 outtextxy(5,150,"       654 Hz.              Q     W    E    R    T   Y    U   I");
 outtextxy(5,175,"      256 Hz.               A     S    D    F    G   H    J   K");
 outtextxy(5,200,"      1220 Hz.              Z     X    C    V    B   N    M   ,");

 setcolor(MAGENTA);
 outtextxy(5,225,"Hit 1 :- for user defined fundamental tone(MOOL SWAR i.e. Sa)");
 outtextxy(5,250,"Hit 3 :- for (Automation) music generated by computer");
 outtextxy(5,275,"Hit '4' :- for saving your music");
 outtextxy(5,300,"Hit 5 :- for play your saved music");
 while(1)
 {
  key = getche();
  key = toupper(key);      //making key uppercase
  if (save == 1)
  {keysave[j] = key;j++;
   savingmove();}    //storing pressed key in char array keysave

  if(key == '4'&& save == 0)
  {
     save = 1;
     settextstyle(TRIPLEX_FONT,0,5);setcolor(WHITE);
     outtextxy(50,350,"NOW SAVING..");
     settextstyle(TRIPLEX_FONT,0,1);
     outtextxy(10,425,"now music will automatically saved as you press keys");
     outtextxy(50,450,"to stop saving press 9(nine) ");

  }
  objdhun.search_play(key,256);

   if (key == 27 || v != ' ')
  { nosound();
    sanchay();
    cleardevice();
    return (0) ;} //goto main and made false
  else if ( key == '1')
  {nosound();
  sanchay();
  return (8);    //goto main and switch to user
  }
  else if (key == '?' || key == '/')
  {nosound();
  sanchay();	     //dhuns 10 help
   return (10);
  }
  else if( key =='3')
  {nosound();
  sanchay();
  return 24;}     //dhuns 24 vintune
  else if(key == '5')
  {nosound();
  //sanchay();
  return 18;}     //dhuns 24 vintune
  else if( key =='9')
  {nosound();
  sanchay();
  return 6;     //restart dhun
   }
  else
   {//nosound();
    cout<<"\b";
   }
  cout<<"\b";
  putpixel(random(600),random(480),15);
 }

}

int user()
{
clrscr();
  cleardevice();
 int j=0;
 long int freq,hz;
 char key;
 sangeet objuser;
  setcolor(LIGHTRED);
  outtextxy(5,100,"Enter your fundamental frequency(Sa) in Hz. ");
  outtextxy(5,125,"Frequencies must be between 200 to 3000 for good quality");
  outtextxy(5,150,"Recommended freq are 288,352,496,680,759,1300,1900Hz.etc ");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
  cin>>freq;
  if(freq < 200 || freq > 3000)
  {cout<< "freq you have Entered is not audible";delay(3000);
  return 8;} //call again
  title();
  outtextxy(25,150," (User) Hz.               A     S    D    F    G   H    J   K");
  setcolor(MAGENTA);
 outtextxy(5,225,"Hit 1 :- for switch back to default fundamental tone(MOOL SWAR i.e. Sa)");
 outtextxy(5,250,"Hit '2' :- for setting the fundamental tone(MOOL SWAR i.e. Sa) again");
 outtextxy(5,275,"Hit 3 :- for (Automation) music generated by computer");
 outtextxy(5,300,"Hit '4' :- for saving your music");
 outtextxy(5,325,"Hit 5 :- for play your saved music");
  while(1)
 {
  key = getche();
  key = toupper(key);      //making key uppercase
  if (save == 1)
   {
    keysave[j] = key;j++;}
     if(key == '4' && save == 0)
      {
       save = 1;
       settextstyle(TRIPLEX_FONT,0,5);setcolor(WHITE);
       outtextxy(80,375,"NOW SAVING.......");
       settextstyle(TRIPLEX_FONT,0,1);
       outtextxy(10,410,"now music will automatically saved as you press keys");
       outtextxy(50,435,"to stop saving press 9 (nine)");
      }

  objuser.search_play(key,freq);

   if (key == 27 || *s[7] != 'O')
  { nosound();
    sanchay();
    cleardevice();
  return (0);}           // goto main and false
  else if ( key == '1')
  {nosound();
  sanchay();
  cleardevice();
   return (6);           //go to main and switch dhun
  }
  else if ( key == '2')
  {nosound();
  cleardevice();
   return (8);           //go to main and switch again user
  }
  else if (key == '?' || key == '/')
  {nosound();
  sanchay();
   return (9); //users 9help
  }
  else if( key =='3')
  {nosound();
  return 23;}  //users 23 vintune
  else if( key =='5')
  {nosound();
  //sanchay();
  return 17;}     //user 17 loadfile
  else if( key =='9')
  {nosound();
  sanchay();
  return 8;      //restart user
   }
  else
   {//nosound();
    cout<<"\b";
   }
   putpixel(random(600),random(480),10);
 }
}
void sanchay()
{
 if(save == 1)
 {
 clrscr();
  cleardevice();

  char file[20] = {"c:\\"},nm1[10],choice;
  settextstyle(TRIPLEX_FONT,0,2);setcolor(LIGHTGREEN);
  //vinod:
 outtextxy(5,50,"Enter your music file name to be saved ");
 cout<<"\n\n\n\n\n\t\t\t\t\t\t\t";
 cin>>nm1;//.get(nm1,10);
 //for(int ya = 0;nm1[ya]!= '\0';ya++)
 //if(!isspace(nm1[ya]))
 //goto vinod;
 strcat(file,nm1);
 strcat(file,".vin");
  ofstream out(file);
 out<<keysave;
 out.close();
  save =0;
  settextstyle(TRIPLEX_FONT,0,1);setcolor(WHITE);
  outtextxy(5,100,"Now your music file is saved by the name ");
  cout<<"\n\n\t\t\t\t\t\t\t"<<nm1;
  outtextxy(5,150,"Do you want to play this file(Y/N):  ");
  cout<<"\n\n\n\t\t\t\t\t\t\t\t";
  cin>>choice;
  choice = toupper(choice);
  if(choice == 'Y')
  loadfile();
  else
  {outtextxy(15,200,"OK! you can play your saved file anytime by pressing 5 ");
  outtextxy(35,225,"But remember the file name | press a key  ");
  getch();
  }

 }
}

void vintune()
{
 int tim=50;
 long int freq,hz;
 char key;
 sangeet objvintune;
 clrscr();
 cleardevice();
 settextstyle(TRIPLEX_FONT,0,4);
 setcolor(LIGHTGREEN);
 outtextxy(50,15,"AUTOMATION MODE");
 settextstyle(TRIPLEX_FONT,0,2);
 setcolor(LIGHTRED);
 outtextxy(5,50,"Enter any freq(Recomended between 250 to 800");//  & speed";
 cout<<"\n\n\n\n\n\t\t\t\t\t\t\t";
 cin>>freq;
 if(freq < 200 || freq > 3000)
 freq = 456;
 outtextxy(5,90,"Enter speed (between 1 to 20): 20 is slowest & 1 is fastest");
 cout<<"\n\n\t\t\t\t\t\t\t";
 cin>>tim;
 outtextxy(5,200,"If you press any key automation will aborted,Enter to procede");
 getch();
  if(tim <1 || tim > 20)
  tim = 6;
  tim = tim*70;

 while(!kbhit())
 {
  key =  65+ random(8);
  if(key == 'B') key = 'S';
  else if(key == 'C')key = 'J';
  else if(key == 'E') key ='K';
  objvintune.search_play(key,freq);
  delay(random(tim));
  sitare(230);
 }
 nosound();
}

void loadfile()
{
 char sur;
 long int freq = 256;
 sangeet objloadfile;
 clrscr();
 cleardevice();
 char file[20] = {"c:\\"},nm1[10],str[80];
 settextstyle(TRIPLEX_FONT,0,4);
 setcolor(LIGHTGREEN);
 outtextxy(50,15,"PLAY YOUR SAVED MUSIC FILE");
 settextstyle(TRIPLEX_FONT,0,1);
 outtextxy(5,50,"**************************************************************************************************");
 setcolor(LIGHTRED);
 outtextxy(5,100,"Enter your music file name  ");
 cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t";
 cin>>nm1;
 strcat(file,nm1);
 strcat(file,".vin");

 ifstream READ(file);

  if(READ.fail())
   {
     outtextxy(10,300,"\nAn error has occured during loading. file can't be opened");
     outtextxy(10,350,"\nCheck path & file name (should be without extention)");
     getch();
   }
  else
   {
    outtextxy(5,200,"If you press any key,file playing will aborted,Enter to procede");
    getch();
    while(!kbhit())
     {
       if(!READ.eof())
	 {
	  READ.get(sur);  //member 'get(a)' Gets 1 char ,'getline(a,79)' Gets 1 line
	  cout<<"\t\t\t\t\t\t\t\t\t\t\t"<<sur<<"\b"<<sur<<"\b"<<sur<<"\b"<<sur<<"\b"<<sur<<"\b";

	  objloadfile.search_play(sur,freq);

	  sitare(230);
	  delay(55);
	 }
      else
       outtextxy(5,300,"FILE ENDs,Press Any Key");
      }
   }
  READ.close();
  nosound();
}
//========================= USED ONLY FOR DISPLAYS =============================

void creator()
{
 int i,j,k=100,brk = 0;
 cleardevice();
 setbkcolor(BLACK);
 settextstyle(2,0,10);
  for(i=0;i<12;i++)
   {
    k+=35;
     for(j=600;j>=k;j-=5)
       {
	 sound(random(2000));
	 setcolor(10);
	 outtextxy(j,150,s[i]);
	 setcolor(5);
	 outtextxy(j,150,s[i]);
	 delay(random(100));          //100
	 nosound();
	 putpixel(random(j),random(480),10);
	 putpixel(random(j)+1,150+1,3);
	 if(kbhit() )
	{ brk = 1;
	  break;
	}
	}
	setcolor(10);
	outtextxy(j,150,s[i]);
       if(brk == 1)
	break;
   }
   if(brk == 1)
   {cleardevice();  setcolor(WHITE);
    outtextxy(200,150,"VINOD KOTIYA");
    for(i = 0; i <200; i++) sitare(480);
    getch();  }
   if(brk != 1)
   delay(2000);
   settextstyle(2,0,8);
   setcolor(3);
   outtext("   PRESS ANY KEY");
   getch();
   cleardevice();
    if(*s[5] != ' ')
     exit(0);
    settextstyle(2,0,6);
    setcolor(3);
    outtextxy(5,20,"B.E. 2nd Year(Information Technology)");
    outtextxy(5,45,"Bhopal Engg College,Bhopal");
    outtextxy(5,70,"Add:- s-2,Shrimaya Apart Sector-B/363 ,Sarvdharm Colony,");
    outtextxy(5,90,"      Bhopal.(India)  Fone# +91-0755-794428");
    settextstyle(2,0,10);
    setcolor(GREEN);
    outtextxy(30,150,"VINOD KOTIYA presenting");
    settextstyle(2,0,8);
    setcolor(LIGHTRED);
    outtextxy(100,200,"DHUN(The Musical Instruments)");
    settextstyle(2,0,6);
    setcolor(3);
    outtextxy(200,400,"   PRESS ANY KEY");
    delay(2000);
    getch();
}

void title()
{
  cleardevice();
  settextstyle(TRIPLEX_FONT,0,2);
  setcolor(LIGHTGREEN);
  outtext("    VINOD KOTIYA's");
  settextstyle(TRIPLEX_FONT,0,5);
  setcolor(WHITE);
  setbkcolor(BLACK);
  outtextxy(0,40,"     MUSICAL INSTRUMENTS ");
  outtextxy(0,75,"***************************************");
  settextstyle(TRIPLEX_FONT,0,3);
  setcolor(RED);
  outtextxy(10,100,"Keys                          press ? for help");
  settextstyle(TRIPLEX_FONT,0,2);
  setcolor(LIGHTGREEN);
  outtextxy(5,125,"Fundamental Tone      Sa   Re  Ga  Ma  Pa  Dha  Ni  Saa");
  settextstyle(TRIPLEX_FONT,0,1);
  setcolor(LIGHTRED);
}

void aboutme()
{
 char hlp;
 cleardevice();
 settextstyle(TRIPLEX_FONT,0,4);
 setbkcolor(BLUE);
 setcolor(LIGHTGREEN);
 outtextxy(1,15,"**************** ABOUT ME *******************");
 settextstyle(2,0,6);
 setcolor(3);
 outtextxy(10,50,"Author : Vinod Kotiya");
 outtextxy(10,75,"          s/o Shri R.K.Kotiya");
 outtextxy(10,100,"B.E. 2nd Year(Information Technology)");
 outtextxy(10,125,"Bhopal Engg College,Bhopal");
 outtextxy(10,150,"Add :- s-2 Shrimaya apt sector - B/363,Sarvdharm colony");
 outtextxy(10,175,"Bhopal Fone# +91-0755-794428");
 settextstyle(TRIPLEX_FONT,0,4);
 setcolor(LIGHTGREEN);
 outtextxy(1,215,"************* ABOUT PROGRAM ********************");
 settextstyle(2,0,6);
 setcolor(3);
 outtextxy(10,250,"Name : DHUN.exe");
 outtextxy(10,275,"size : 90KB(approx)");
 outtextxy(10,300,"Programming Language : C++");
 outtextxy(10,325,"associated files : EGAVGA.BGI,TRIP.CHR & LITT.CHR");
 outtextxy(10,350,"compeletion date : 06/10/2002 to 07/10/2002");
 outtextxy(10,375,"compeletion time :- 4.30 Hrs.(9.00 pm to 1.30 am)");
 outtextxy(10,400,"Lines of code 700");
 outtextxy(50,425,"PRESS ? for help");
 hlp = getch();
 hlp = toupper(hlp);
 if(hlp == '/')
 help();

}
void sitare(int topy)
{
  int x,y;
  x = random(600);y = 480 - random(topy);    //draw on screen resolution x*y
  putpixel(x,y,10);
  putpixel(x+1,y,10);
  putpixel(x+1,y-1,10);
  putpixel(x+1,y+1,10);               //       0
  putpixel(x+2,y,10);                 //      000
  putpixel(x+3,y,10);                 //    0000000
  putpixel(x-1,y,10);                 //      000
  putpixel(x-1,y-1,10);               //       0
  putpixel(x-1,y+1,10);
  putpixel(x-2,y,10);
  putpixel(x-3,y,10);
  putpixel(x,y+1,10);
  putpixel(x,y+2,10);
  putpixel(x,y+3,10);
  putpixel(x,y-1,10);
  putpixel(x,y-2,10);
  putpixel(x,y-3,10);
}
void savingmove()
{
 settextstyle(TRIPLEX_FONT,0,5);setcolor(RED);
 if(dot==0)
 {outtextxy(320,350,".");dot++;}
 else if(dot==1)
 {outtextxy(330,350,".");dot++;}
 else if(dot==2)
 {outtextxy(340,350,".");dot++;}
 else if(dot==3)
 {outtextxy(350,350,".");dot++;}
 else if(dot==4)
 {outtextxy(360,350,".");dot++;}
 else if(dot==5)
 {outtextxy(370,350,".");dot++;}
 else if(dot==6)
 {outtextxy(380,350,".");dot++;}
 else if(dot==7)
 {//settextstyle(TRIPLEX_FONT,0,10);setcolor(BLACK);
 outtextxy(300,350,"");
 //rectangle(320,380,440,410);
 //floodfill(321, 381, getmaxcolor());
 dot=0;
 }
}
void help()
{
 cleardevice();
 setcolor(LIGHTGREEN);
 settextstyle(TRIPLEX_FONT,0,5);
 outtextxy(220,10,"HELP");
 settextstyle(TRIPLEX_FONT,0,2);
 outtextxy(5,60,"***************************************************************************************");
 setcolor(LIGHTRED);
 settextstyle(2,0,6);
 outtextxy(5,100,"The frequencies shown are the fundamental tones i.e.Sa or Do ");
 outtextxy(5,125,"By changing The frequencies you can get tunes of different ");
 outtextxy(5,150,"instruments ");
 outtextxy(5,200,"There are 3 modes 1/user 2/ default 3/Automation");
 outtextxy(5,225,"In Default mode: only 3 instruments frequency avail(use app. keys)");
 outtextxy(5,250,"In User mode:-u first enter the funda freq of instrument");
 outtextxy(5,275,":-if u want to choose different freq press U & enter freq again");
 outtextxy(5,300,"3rd mode is automation mode(com generate some tunes)");
 outtextxy(5,325,":-when you enter the freq & speed of tune ");
 outtextxy(5,350,"If you press 4 your created music will saved automatically ");
 outtextxy(5,375,":-to stop saving you have to press 9");
 outtextxy(50,400,"Press any key ");
 getch();
 cleardevice();
 setcolor(LIGHTGREEN);
 settextstyle(TRIPLEX_FONT,0,5);
 outtextxy(220,10,"HELP");
 settextstyle(TRIPLEX_FONT,0,2);
 outtextxy(5,60,"***************************************************************************************");
 setcolor(LIGHTRED);
 settextstyle(2,0,6);
 outtextxy(5,100,"After pressing 9 a file saving option will come ");
 outtextxy(5,125,":-Enter your file name in which your music will save");
 outtextxy(5,150,":-File name must be less then 6 char without extention");
 outtextxy(5,200,"If you press 5 you can play your saved music");
 outtextxy(5,225,":-Enter your music file name");

 outtextxy(5,250,":-All music files will save in c drive with *.vin");
 //outtextxy(5,275,":-if u want to change freq press U ");
 //outtextxy(5,300,":-The 3rd mode is automation mode(com generate some tunes)");
 //outtextxy(5,325,":-when you enter the freq & speed of tune ");
 outtextxy(5,350,"you must have supported files EGAVGA.BGI,TRIP.CHR & LITT.CHR");
 outtextxy(5,375,"(distributed with exe) In the same folder of exe.");
 outtextxy(50,400,"Press any key ");
 getch();
 aboutme();
}