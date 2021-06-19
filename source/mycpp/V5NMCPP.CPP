#include<iostream.h>
#include<conio.h>
#include<string.h>
int option();
void title(void);
char j;
class dir
{
  long int fone,std;
  double mobile;
  char nm[10],snm[10],place[20],ct[10];

 public:
 void set(long int , long int ,double,char[],char[],char[],char[]);
 void show();
 void nmchoice();
 void snmchoice();
 void ctchoice();
 void placechoice();
 void datacomman();
};
void dir :: set( long int s,long int f,double m,char n[10],char sn[10],char c[10],char p[20])
{
 std = s;
 fone = f;
 mobile = m;
 strcpy(nm,n);
 strcpy(snm,sn);
 strcpy(ct,c);
 strcpy(place,p);

}
void dir ::show()
{
 cout<<nm<<" "<<snm<<"  "<<place<<"    "<<std<<"-"<<fone<<"  "<<mobile<<endl;
}
void dir :: datacomman()
{
 int i,v,r=1,loop;
 char choice[10],ch;
 dir s[6];
 s[0].set(755,794428, 0,"RAMESH","KOTIYA","BHOPAL","SARVDHARM COL");
 s[1].set(731,463057, 0,"MAHENDRA","KADAM","INDORE","INDRAPURI");
 s[2].set(755,763809,98272.04449 ,"REWARAM","JATAV","BHOPAL","TTNAGAR");
 s[3].set(755,736852, 0 ,"JAI","NEEM","KHAMGAON"," ");
 s[4].set(755,767173, 0 ,"PAPPU"," ","BHOPAL","TTNAGAR");
 s[5].set(731,363153,98272.15774 ,"RAJKUMAR","NEEM","INDORE","AZAD NAGAR");
 loop=6;
 v=option();
 title();
 if(v==1)
 {
  cout<<"\nENTER ONLY NAME \n\t";
  cin>>choice;
  for(i=0;i<loop;i++)
  {

   if(strcmpi(choice,s[i].nm)==0)
    {r=0;
    s[i].nmchoice();}
  }
  if(r!=0)
  cout<<"\nThe NAME "<<choice<<" You Have Entered Does Not Exist";

 }
  else if(v==2)
 {
  cout<<"\nENTER ONLY SURNAME \n\t";
  cin>>choice;
  for(i=0;i<loop;i++)
  {

   if(strcmpi(choice,s[i].snm)==0)
    {r=0;
    s[i].snmchoice();}
  }
  if(r!=0)
  cout<<"\nThe SURNAME "<<choice<<" You Have Entered Does Not Exist";

 }
  else if(v==3)
 {
  cout<<"\nENTER ONLY CITY NAME \n\t";
  cin>>choice;
  for(i=0;i<loop;i++)
  {

   if(strcmpi(choice,s[i].ct)==0)
    {r=0;
    s[i].ctchoice();}
  }
  if(r!=0)
  cout<<"\nThe CITY NAME "<<choice<<" You Have Entered Does Not Exist";

 }
 else if(v==4)
 {
  cout<<"\nENTER ONLY CITY AREA NAME \n\t";
  cin>>choice;
  for(i=0;i<loop;i++)
  {

   if(strcmpi(choice,s[i].place)==0)
    {r=0;
    s[i].placechoice();}
  }
  if(r!=0)
  cout<<"\nThe CITY AREA NAME "<<choice<<" You Have Entered Does Not Exist";

 }
 else if(v==5)
 {
  cout<<"\nENTER ONLY FIRST CHARACTER OF NAME ONLY IN CAPITAL LATTER\n\t";
  cin>>ch;
  for(i=0;i<loop;i++)
  {

   if(ch==s[i].nm[0])
    {r=0;
    s[i].nmchoice();}
  }
  if(r!=0)
  cout<<"\nThe CHARACTER "<<ch<<" You Have Entered Does Not Exist OR NOT IN CAPITAL";
 }
 else if(v==6)
  {
   for(i=0;i<loop;i++)
   s[i].nmchoice();
  }
 else
  cout<<"\nPLEASE ENTER CHOICE No.like 1/2/3/4/5/6  YOU FOOL";

}
void dir :: nmchoice()
{

  cout<<nm<<" "<<snm<<"  "<<ct<<" "<<place<<"    "<<std<<"-"<<fone<<"  "<<mobile<<endl;

}
void dir :: snmchoice()
{

  cout<<snm<<" "<<nm<<"  "<<ct<<" "<<place<<"    "<<std<<"-"<<fone<<"  "<<mobile<<endl;

}
void dir :: ctchoice()
{

  cout<<ct<<" "<<place<<" "<<nm<<"  "<<snm<<"    "<<std<<"-"<<fone<<"  "<<mobile<<endl;

}
void dir :: placechoice()
{
  cout<<place<<" "<<ct<<" "<<nm<<"  "<<snm<<"    "<<std<<"-"<<fone<<"  "<<mobile<<endl;

}
void main(void)
{
 clrscr();
 title();
 dir d;
 d.datacomman();
 getch();
}
int option()
{
 int v;
 cout<<"\t\nENTER YOUR WAY TO FIND PHONE NO.(1/2/3/4/5/6)\n\n";
 cout<<"  1.By Typing Name"<<" \t2.By Typing Surname\n\n"
     <<"  3.By Typing City"<<" \t4.By Typing Area\n\n"
     <<"  5.By Typing First Character of Name(ONLY CAPITAL LETTER)\n\n"
     <<"  6.Want To See Whole Teliphone Directory List\n\n\t";
 cin>>v;
 return (v);
}
void title (void)
{
 clrscr();
 cout<<"********************************************************************************";
 cout<<"***************************TELIPHONE  DIRECTORY*********************************";
 cout<<"********************************************************************************"
     <<"*****************                                               *****************"
     <<"*************                                                    **************";
 cout<<"\t\tCOPYRIGHT 2002 VINOD KOTIYA .ALL RIGHTS UNRESERVED\n";
 cout<<"********************************************************************************\n\n";
}
