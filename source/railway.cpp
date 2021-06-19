#include<iostream.h>
#include<conio.h>
#include<string.h>
//#include<stream.h>
#include<fstream.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>

void Frontpage(){
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"C:/TurboC3/Bgi");
setbkcolor(0);
setcolor(1);
settextstyle(4,0,4);
     outtextxy(10,5,"******S O F T W A R E******");
setcolor(1) ;
settextstyle(4,0,6);

     outtextxy(20,55,"Indian Railway Reservation");
     outtextxy(20,135,"     System");
settextstyle(7,0,3);
time_t t;time(&t);
//repn(21);
rectangle(12,310,240,345);
gotoxy(4,24);
cout<<""<<ctime(&t)<<endl;
sound(1000);
delay(20);
sound(2000);
delay(50);
nosound();
getch();
cleardevice();
}
//-------
void IndiaMap()
{
int m,n;
m=DETECT;
initgraph(&m,&n,"C:/TurboC3/Bgi");
setbkcolor(0);
rectangle(85,54,490,406);
line(85,64,110,116);
line(85,114,110,116);
outtextxy(65,110,"32");
line(85,208,110,210);
outtextxy(65,204,"24");
line(85,303,110,399);
outtextxy(65,299,"16");
line(85,397,110,399);
outtextxy(70,393,"8");
line(88,406,91,376);
outtextxy(82,414,"68");
line(207,406,210,376);
outtextxy(197,414,"76");
line(325,406,326,376);
outtextxy(315,414,"84");
line(442,406,440,376);
outtextxy(432,414,"92");
line(490,336,460,339);
outtextxy(495,333,"12");
line(490,238,460,241);
outtextxy(495,235,"20");
line(490,147,480,148);
outtextxy(495,144,"28");
line(490,54,460,58);
outtextxy(495,51,"36");
line(172,54,171,78);
outtextxy(166,43,"72");
line(266,54,267,78);
outtextxy(260,43,"80");
line(355,54,356,78);
outtextxy(351,43,"88");
line(450,54,451,78);
outtextxy(445,43,"96");
outtextxy(50,440,"Railway Reservation System");
rectangle(330,338,360,325);
setfillstyle(10,getmaxcolor());
floodfill(335,330,getmaxcolor());
rectangle(330,345,360,358);
rectangle(330,363,360,376);
setfillstyle(3,getmaxcolor());
floodfill(335,365,getmaxcolor());
rectangle(330,383,360,396);
setfillstyle(1,getmaxcolor());
floodfill(335,385,getmaxcolor()) ;
outtextxy(345,310,"LEGEND");
outtextxy(365,330,"Zone II");
outtextxy(365,352,"Zone III");
outtextxy(365,370,"Zone IV");
outtextxy(365,389,"Zone V");
line(85,182,90,184);
line(90,184,92,192);
line(92,192,100,191);
line(100,191,102,202);
line(102,202,105,215);
line(105,215,122,207);
line(122,207,127,208);
line(127,208,132,206);
line(132,206,137,208);
line(137,208,145,205);
line(145,205,140,212);
line(140,212,137,218);
line(137,218,132,222);
line(132,222,127,223);
line(127,223,118,221);
line(118,221,115,219);
line(115,219,110,217);
line(110,217,108,215);
setfillstyle(1,getmaxcolor());
floodfill(115,216,getmaxcolor()) ;
line(145,205,144,198);
line(144,198,141,190);
line(141,190,148,191);
line(148,191,156,197);
line(156,197,160,201);
line(160,201,161,206);
line(161,206,156,212);
line(156,212,150,217);
line(150,217,140,224);
line(140,224,135,227);
line(135,227,120,230);
line(120,230,119,227);
line(119,227,125,223);
setfillstyle(3,getmaxcolor());
floodfill(125,224,getmaxcolor());
line(120,230,136,242);
line(136,242,144,246);
line(144,246,158,243);
line(158,243,162,234);
line(162,234,165,235);
line(165,235,167,237);
line(167,237,166,260);
line(166,260,167,265);
circle(166,268,3);
//setfillstyle(1,getmaxcolor());
floodfill(167,267,getmaxcolor());
outtextxy(115,263,"MUMBAI");
line(166,269,167,275);
line(167,275,173,280);
line(173,280,180,285);
line(180,285,183,290);
line(183,290,181,295);
line(181,295,171,291);
line(171,291,167,275);
setfillstyle(3,getmaxcolor());
floodfill(173,288,getmaxcolor());
line(171,291,179,310);
line(179,310,188,323);
line(188,323,190,335);
line(190,335,195,350);
line(195,350,203,360);
line(203,360,216,380);
circle(215,381,2);
setfillstyle(1,getmaxcolor());
floodfill(216,382,getmaxcolor());
line(214,382,227,400);
line(227,400,231,403);
line(231,403,235,402);
line(235,402,238,399);
line(238,399,230,390);
line(230,390,231,370);
line(231,370,228,367);
line(228,367,213,358);
line(213,358,195,325);
line(195,325,200,310);
line(200,310,205,305);
line(205,305,222,290);
line(222,290,221,280);
circle(216,285,2);
setfillstyle(1,getmaxcolor());
floodfill(217,286,getmaxcolor()) ;
outtextxy(225,283,"KILLARI");
line(221,280,200,268);
line(200,268,193,260);
line(193,260,164,252);
line(194,252,198,248);
line(198,248,228,250);
line(228,250,260,230);
line(260,230,288,222);
line(288,222,312,238);
line(312,238,330,255);
line(330,255,341,254);
line(341,254,330,265);
line(330,265,320,277);
line(320,277,299,292);
line(299,292,285,282);
line(285,282,275,270);
line(275,270,265,255);
line(265,255,256,256);
line(256,256,257,282);
line(254,265,257,282);
line(257,282,259,295);
line(259,295,262,305);
line(262,305,240,350);
line(240,350,239,358);
line(239,358,245,356);
line(245,356,255,348);
line(255,348,268,345);
line(268,345,265,365);
line(265,365,255,379);
line(255,379,238,399);
setfillstyle(10,getmaxcolor()) ;
floodfill(235,395,getmaxcolor());
line(268,345,271,339);
circle(269,338,3);
setfillstyle(1,getmaxcolor());
floodfill(270,338,getmaxcolor());
outtextxy(273,340,"CHENNAI");
line(271,339,269,315);
line(269,315,295,298);
line(295,298,299,292);
line(341,254,349,253);
line(349,253,358,247);
line(358,247,320,235);
line(320,235,310,228);
line(310,228,305,222);
line(305,222,315,212);
line(315,212,352,216);
line(352,216,359,234);
line(359,234,358,247);
setfillstyle(10,getmaxcolor());
floodfill(340,240,getmaxcolor());
line(359,234,371,229);
line(371,229,376,221);
circle(374,220,3);
setfillstyle(1,getmaxcolor());
floodfill(375,221,getmaxcolor());
outtextxy(350,205,"CALCUTTA");
line(376,221,382,216);



line(382,216,387,228);
line(387,228,385,232);
line(385,232,371,229);
line(387,228,399,225);
line(399,225,397,213);
line(397,213,416,218);
line(416,218,432,242);
line(432,242,435,236);
line(435,236,458,253);
line(458,253,464,287);
line(464,287,469,291);
line(469,291,490,289);
line(382,216,377,199);
line(377,199,372,195);
line(372,195,378,190);
line(378,190,371,184);
line(371,184,376,179);
line(376,179,379,183);
line(379,183,381,179);
line(381,179,382,181);
line(382,181,388,179);
line(388,179,393,186);
line(393,186,418,189);
line(418,189,421,192);
line(421,205,424,207);
line(424,207,431,221);
line(431,221,436,220);
line(436,220,439,207);
line(439,207,447,201);
line(447,201,450,203);
line(450,203,455,181);
line(455,181,461,164);
line(461,164,473,156);
line(473,156,478,149);
line(478,149,476,147);
line(476,147,467,146);
line(467,146,465,144);
line(465,144,468,141);
line(468,141,463,138);
line(463,138,451,140);
line(451,140,438,148);
line(438,148,419,159);
line(419,159,417,157);
line(417,157,415,160);
line(415,160,421,164);
line(421,164,418,166);
line(418,166,386,171);
line(388,179,386,171);
//setfillstyle(1,getmaxcolor());
//floodfill(439,189,getmaxcolor());
line(372,195,367,197);
line(367,197,339,199);
line(339,199,324,189);
line(324,189,311,180);
line(311,180,270,165);
line(270,165,260,158);
line(260,158,252,164);
line(252,164,226,172);
line(226,172,220,163);
line(220,163,226,154);
line(226,154,228,154);
circle(233,155,3);
setfillstyle(1,getmaxcolor());
floodfill(234,156,getmaxcolor());

outtextxy(231,142,"DELHI");
line(228,146,216,137);
setfillstyle(1,getmaxcolor());
floodfill(231,155,getmaxcolor());

line(216,137,201,130);
line(201,130,197,136);
line(197,136,193,139);
line(193,139,214,151);
line(214,151,215,156);
line(215,156,214,165);
line(214,165,215,174);
line(215,174,218,178);
line(218,178,227,179);
line(227,179,251,174);
line(251,174,274,181);
line(274,181,299,197);
line(299,197,296,200);
line(296,200,294,206);
line(294,206,248,218);
line(248,218,201,232);
line(201,232,189,225);
line(189,225,179,204);
line(179,204,168,188);
line(168,188,158,184);
line(158,184,160,179);
line(160,179,184,171);
line(184,171,186,166);
line(186,166,181,154);
line(181,154,193,139);
setfillstyle(10,getmaxcolor());
//setfillsstyle(1,2);
floodfill(184,156,getmaxcolor());
line(181,154,168,162);
line(168,162,160,168);
line(160,168,150,172);
line(150,172,146,168);
line(146,168,132,177);
line(132,177,139,180);
line(139,180,141,190);
line(201,130,203,124);
line(203,124,209,121);
line(209,121,210,119);
line(210,119,199,112);
line(199,112,188,109);
line(188,109,186,96);
line(186,96,195,86);
line(195,86,190,80);
line(190,80,182,75);
line(182,75,187,69);
line(187,69,210,59);
line(210,59,240,78);
line(240,78,260,72);
line(260,72,272,78);
line(272,78,255,98);
line(255,98,264,105);
line(264,105,258,109);
line(258,109,250,107);
line(250,107,253,123);
line(253,123,280,138);
line(280,138,274,148);
line(274,148,270,142);
line(270,142,251,139);
line(251,139,253,123);
setfillstyle(1,getmaxcolor());
floodfill(255,128,getmaxcolor());
line(274,148,271,154);
line(271,154,310,172);
line(310,172,315,169);
line(315,169,317,172);
line(317,172,325,174);
line(325,174,330,176);
line(330,176,337,181);
line(337,181,347,186);
line(347,186,362,177);
line(362,177,355,174);
line(355,174,330,176);
setfillstyle(1,getmaxcolor());
floodfill(335,177,getmaxcolor());
line(362,177,369,169);
line(369,169,371,160);
line(371,160,376,161);
line(376,161,377,169);


line(377,169,386,171);
line(200,95,205,100);
setfillstyle(3,getmaxcolor());
floodfill(250,160,getmaxcolor());
line(205,100,210,103);
setfillstyle(3,getmaxcolor());
floodfill(225,120,getmaxcolor());
line(210,103,214,99);
line(214,99,207,90);
line(207,90,203,89);
line(203,130,236,123);
setfillstyle(1,getmaxcolor());
floodfill(204,97,getmaxcolor());
line(222,125,230,130);
line(230,130,236,123);
line(236,123,231,115);
line(231,115,217,112);
line(217,112,218,119);
line(218,119,222,125);
setfillstyle(1,getmaxcolor());
floodfill(220,119,getmaxcolor());
setfillstyle(1,getmaxcolor());
floodfill(230,125,getmaxcolor());

setfillstyle(1,getmaxcolor());
floodfill(225,119,getmaxcolor());
setfillstyle(1,getmaxcolor());
floodfill(206,98,getmaxcolor());


line(295,406,290,389);
line(290,389,280,380);
line(280,380,275,384);
line(275,384,271,390);
line(271,390,274,394);
line(274,394,268,406);
line(400,80,400,100);
line(400,80,396,84);
line(400,80,404,84);
line(404,84,396,84);
outtextxy(397,103,"N");
getch();
closegraph();
}

/*
Class Reservation is created for Booking,Cancellation &
View Statusof the Booked Ticket
*/
class Reservation
{
public:
       void Booking();
       void Cancellation();
       void DisplayStatus();
       void Timetable();
};
void Reservation :: Booking()
{
      char trainname[17];
      char trainno[4];
      int j;
      int k;
      ifstream in("c:/count.txt");
      in>>k;
      ofstream out("c:/count.txt");
      char Name[25];
      char Start[3];
      char End[3];
      char Age[3];
      char Date[9];
      char Date1[9];
      char ch;
      int hr,min;
      int Amount;
      cout<<"Enter Train No.(4 Digits Only)";
      cin>>trainno;
      if(trainno[0]=='1'&& trainno[1]=='0'&& trainno[2]=='7'&& trainno[3]=='2')
      {
	      strcpy(trainname,"Kamayani Express");
	      hr=10;min=15;
	      }
	      if(trainno[0]=='1'&& trainno[1]=='0'&& trainno[2]=='0'&& trainno[3]=='4')
	      {
	      strcpy(trainname,"Chatrapati Expr.");}
	      cout<<"Train Name :"<<trainname<<"\n";
	      cout<<"Enter Date(DD-MM-YY):";
	      cin>>Date;

	      cout<<"Enter Name:";
	      cin>>Name;

	      cout<<"Enter Age;";
	      cin>>Age;
	      cout<<"Enter Starting Station:";
	      cin>>Start;
	      cout<<"Enter Ending Station:";
	      cin>>End;

cout<<"Do you want the return ticket also(Y/N):";
cin>>ch;
     if((Start[0]=='M'&& End[0]=='G')||(Start[0]=='G'&& End[0]=='M'))
     Amount=600;

     if((Start[0]=='M'&& End[0]=='A')||(Start[0]=='A'&& End[0]=='M'))
     Amount=690;

     if((Start[0]=='M'&& End[0]=='V')||(Start[0]=='V'&& End[0]=='M'))
     Amount=720;

     if((Start[0]=='P'&& End[0]=='J')||(Start[0]=='J'&& End[0]=='P'))
     Amount=800;

     if((Start[0]=='B'&& Start[1]=='H'&& End[0]=='D')||(Start[0]=='D'&& End[0]=='B'&& End[1]=='H'))
     Amount=480;

     if((Start[0]=='M'&& End[0]=='L')||(Start[0]=='L'&& End[0]=='M'))
     Amount=590;

     if((Start[0]=='B'&& Start[1]=='A'&& End[0]=='D')||(Start[0]=='D'&& End[0]=='B'&& End[1]=='B'))
     Amount=670;

     if((Start[0]=='C'&& End[0]=='D')||(Start[0]=='D'&& End[0]=='C'))
     Amount=880;

     if((Start[0]=='H'&& End[0]=='D')||(Start[0]=='D'&& End[0]=='H'))
     Amount=880;


	   k=k+1;
	   out<<k;
	   //Ticket Design
	   cout<<"\n\n";
	   cleardevice();
     ofstream out1("c:/words.txt",ios::app);
     if(ch=='N'||ch=='n')
     {
     /* requesst auto detection */
     int gdriver=DETECT,gmode,errorcode;
     /* initialize graphics and local variables*/
     initgraph(&gdriver,&gmode,"C:/TurboC3/Bgi");
     /*draw a rectangle*/
     cleardevice();
     rectangle(20,20,560,60);
     rectangle(20,60,80,140);
     rectangle(80,60,560,140);
     rectangle(20,140,560,200);
     rectangle(20,200,560,220);
     rectangle(20,220,560,370);
     rectangle(20,350,560,400);
     settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
     setcolor(9);
     floodfill(30,22,getmaxcolor());
     outtextxy(40,6,"HAPPY  JOURNEY");
     settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
     outtextxy(30,70,"PNR");
     outtextxy(30,85,"NO:");
     outtextxy (85,70,"TRAIN");
     outtextxy(85,85,"NO:");
     outtextxy(200,70,"DATE");
     outtextxy(315,70,"DISTANCE");
     outtextxy(100,140,"Journey Cum Reservation Ticket");
     outtextxy(50,197,"NAME");
     outtextxy(150,197,"Age");
     outtextxy(400,300,"Amount:");
     outtextxy(360,347,"Schedule Dep.");
     setcolor(4);
     outtextxy(30,376,"Note:Departure time liable to change");
     gotoxy(4,8);
     cout<<"INR-9-"<<k;
     gotoxy(12,8);
     cout<<trainno<<"      "<<Date<<"     "<<(Amount/0.40);
     gotoxy(28,12);
     cout<<Start<<"To"<<End;
     gotoxy(8,15);
     cout<<Name<<"    "<<Age;
     gotoxy(63,20);
     cout<<Amount;
     gotoxy(63,23);
     cout<<hr<<":"<<min;
     /*clean up*/
     getch();
     closegraph();
     out1<<"INR-9-"<<k;
     out1<<trainno<<trainname<<Date<<Start<<End<<Amount<<Age<<Name<<hr<<min<<"\n";
     }

     if(ch=='Y'||ch=='y')
     {
      int gdriver=DETECT,gmode,errrorcode;


      /*initialize graphics and local variables*/
      initgraph(&gdriver,&gmode,"C:/TurboC3/Bgi");
      cout<<"Enter Return Journy Date(DD-MM-YY):";
      cin>>Date1;
      cleardevice();
      setbkcolor(0);
      rectangle(20,20,560,60);
      rectangle(20,60,80,140);
      rectangle(80,60,560,140);
      rectangle(20,140,560,220);
      rectangle(20,200,560,220);
      rectangle(20,220,560,370);
      rectangle(20,350,560,400);
      settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
      setcolor(9);
      floodfill(30,22,getmaxcolor());
      outtextxy(40,6,"HAPPY JOURNY");
      outtextxy(30,70,"PNR");
      outtextxy(30,85,"NO:");
      outtextxy(85,70,"TRAIN");
      outtextxy(85,85,"NO:");
      outtextxy(200,70,"DATE");
      outtextxy(315,70,"DISTANCE");
      outtextxy(100,140,"Journey Cum Resservation Ticket");
      outtextxy(50,197,"Age");
      outtextxy(400,300,"Amount:");
      outtextxy(360,347,"Schedule Dep.");
      setcolor(4);
      outtextxy(30,376,"Note:Departure time liable to change");
      gotoxy(4,8);
      cout<<"INT-9-"<<k;
      gotoxy(12,8);
      cout<<trainno<<"    "<<Date<<"    "<<(Amount/0.40);
      gotoxy(28,12);
      cout<<Start<<"To"<<End;
      gotoxy(8,15);
      cout<<Name<<"    "<<Age;
      gotoxy(63,20);
      cout<<Amount;
      gotoxy(63,23);
      cout<<hr<<"::"<<min;
      getch();
      closegraph();
      out1<<"INR-9-"<<k;
      out1<<trainno<<trainname<<Date<<Start<<End<<Amount<<Age<<Name<<hr<<min<<"\n";
      gotoxy(63,24);


      k++;



      /*initialize graphics and local variables*/
      initgraph(&gdriver,&gmode,"c:/TurboC3/Bgi");
      cleardevice();
      setbkcolor(0);
      rectangle(20,20,560,60);
      rectangle(20,60,80,140);
      rectangle(80,60,560,140);
      rectangle(20,140,560,200);
      rectangle(20,200,560,220);
      rectangle(20,220,560,370);
      rectangle(20,350,560,400);
      settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
      setcolor(9);
      floodfill(30,22,getmaxcolor());
      outtextxy(40,6,"HAPPY  JUOURNEY");
      settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
      outtextxy(30,70,"PNR");
      outtextxy(30,85,"NO:");
      outtextxy(85,70,"TRAIN");
      outtextxy(85,85,"NO:");
      outtextxy(200,70,"DATE");
      outtextxy(315,70,"DISTANCE");
      outtextxy(100,140,"Journey Cum Resservation Ticket");
      outtextxy(50,197,"Name");
      outtextxy(150,197,"Age");
      outtextxy(400,300,"Amount:");
      outtextxy(360,347,"Schedule Dep:");
      setcolor(4);
      outtextxy(30,376,"Note:Departure time liable to change");
      gotoxy(4,8);
      cout<<"INT-9-"<<k;
      gotoxy(12,8);
      cout<<trainno<<"    "<<Date1<<"    "<<(Amount/0.40);
      gotoxy(28,12);
      cout<<End<<"To"<<Start;
      gotoxy(63,20);
      cout<<Amount;
      gotoxy(63,23);
      cout<<hr<<":"<<min;
      getch();
      closegraph();
      out1<<"INR-9-"<<k;
      out1<<trainno<<trainname<<Date1<<End<<Start<<Amount<<Age<<Name<<hr<<min<<"\n";
      }
      out1.close();

      }

      void Reservation::DisplayStatus()
      {
       char PNR[11];
       cout<<"Enter PNR No.to View the Details of the Ticket";
       cin>>PNR;
       //reading file
       //ofstream temp("c:/temp.txt");
       ifstream readfile("c:/words.txt",ios::out);
       char words[80];
       while(!readfile.eof())
       {
       readfile.getline(words,80);
       if(words[0]==PNR[0]&&words[1]==PNR[1]&&
	  words[2]==PNR[2]&&words[3]==PNR[3]&&
	  words[4]==PNR[4]&&words[5]==PNR[5]&&
	  words[6]==PNR[6]&&words[7]==PNR[7]&&
	  words[8]==PNR[8]&&words[9]==PNR[9])
	  {
	   cout<<"   Train no.:"
	       <<words[10]<<words[12]<<words[13]<<"\t\t"<<"train Name:";

	     for(int m=14;m<30;m++)
	     {
	      cout<<words[m];
	     }
	     cout<<"\n";
	     cout<<"\n";
	     cout<<"   PNR No.is:"<<PNR<<"\t"<<"Date:";
	     for(m=30;m<38;m++)
	     {
	      cout<<words[m];
	     }
	     cout<<"\n";
	     cout<<"\n";
	   cout<<"Name:";
	   int x=strlen(words);
	   for(int y=49;y<x;y++)
	   {
	    cout<<words[y];
	   }
	   cout<<"\n";
	   cout<<"Age:"<<words[47]<<words[48]<<"\t\t"
	   <<"Journey From"<<words[38]<<words[39]<<words[40]<<"To"
	   <<words[41]<<words[42]<<words[43]<<"\n";
	   cout<<"\n";
	   cout<<"Departure Time:"<<words[47]<<words[48]<<"\n"<<words[50]
	   <<"\t"<<"Amount :"<<words[44]<<words[45]<<words[46];
	   }

	   else{}
	   }
	   readfile.close();
	   getch();
	   }


	void Reservation::Cancellation()
	{
	 char PNR[11];
	 cout<<"Enter PNR No. tp View the Details of the ticket";
	 cin>>PNR;
	 // readin file
	 ofstream temp("c:/temp.txt");
	 ifstream readFile("c:/words.txt",ios::out);
	 char words[80];
	 while(!readFile.eof())
	 {
	 readFile.getline(words,80);
	 if(words[0]==PNR[0]&&words[1]==PNR[1]&&words[2]==PNR[2]&&
	    words[3]==PNR[3]&&words[4]==PNR[4]&&words[5]==PNR[3]&&
	    words[6]==PNR[6]&&words[8]==PNR[8]&&words[9])
	  {
	  cout<<"Train no.:"<<words[10]<<words[11]<<words[12]<<words[13]<<"\t\t"<<"Train Name:";
	  for(int m=14;m<30;m++)
	  {
	   cout<<words[m];
	  }
	  cout<<"\n";
	  cout<<"\n";
	  cout<<"  PNR no. is :"<<PNR<<"\t"<<"Date:";
	  for(m=30;m<38;m++)
	  {
	   cout<<words[m];
	  }
	  cout<<"\n";
	  cout<<"\n";

	  cout<<" Name:";
	  int x=strlen(words);

	  for(int y=49;y<x;y++)
	  {
	   cout<<words[y];
	  }
	  cout<<"\n";
	  cout<<"Age:"<<words[47]<<words[48]<<"\t\t"<<"Journey From:"
	      <<words[38]<<words[39]<<words[40]<<"To"<<words[41]<<words[42]
	      <<words[43]<<"\n";
	  cout<<"Departure Time:02.00 Hrs"<<"\t"<<"Amount:"<<words[44]<<words[45]<<words[46];
	  cout<<"\n\n\n Note This Ticket has been Cancelled....";
	 }
	 else
	 {temp<<words<<"\n";
	 }
	 }

	 temp.close();
	 readFile.close();
	 ofstream temp1("c:/words.txt");
	 ifstream readFile2("c:/temp.txt",ios::in);
	 char words1[80];

	 while(!readFile2.eof())
	 { readFile2.getline(words1,80);
	 temp1<<words1<<"\n";
	 }
	 temp1.close();
	 readFile2.close();


      getch();
      }

      void Reservation::Timetable()
      {

      int gdriver=DETECT,gmode,errorcode;

      /* initialize graphics and local variables*/

      initgraph(&gdriver,&gmode,"");
      setcolor(7);
      cout<<"                       TIME TABLE";
      cout<<"\n Train no.   Train Name   From Station   To station   Arr time   Dpt Time";
      cout<<"\n 1015        Kushinagar   Mumbai         Gorakhpur    14:10      14:20";
      cout<<"\n 1016        Kushinagar   Goarakhpur     Mumbai       12:05      12:15";
      cout<<"\n 1069        Tulsi        Mumbai         Allahbad     20:15      20:25";
      cout<<"\n 1070        Tulsi        Allahbad       Mumbai        5:35       5:45";
      cout<<"\n 1071        Kamayani     Mumbai         Varanasi      2:20       2:30";
      cout<<"\n 1072        Kamayani     Varanasi       Mumbai        7:35       7:45";
      cout<<"\n 1077        Jhelum       Pune           Jammu         9:25       9:35";
      cout<<"\n 1078        Jhelum       Jammu          Pune         22:25      22:35";
      cout<<"\n 2001        Shatabdi     Bhopal         Delhi          -        14:45";
      cout<<"\n 2002        Shatabdi     Delhi          Bhopal       14:05        -  ";
      cout<<"\n 2133        Pushpak      Mumbai         Lucknow      21:35      21:45";
      cout<<"\n 2134        Pushpak      Lucknow        Mumbai        6:00      21:45";
      cout<<"\n 2155        Bhopal       Bhopal         Delhi        21:20      21.30";
      cout<<"\n 2156        Bhopal       Delhi          Bhopal        8:40       8:50";
      cout<<"\n 2433        Rajdhani     Chennai        Delhi         3:05       3:50";
      cout<<"\n 2434        Rajdhani     Delhi          Chennai      23:35      23:45";
      cout<<"\n 2429        Rajdhani     Banglore       Delhi        20:45      20:55";
      cout<<"\n 2430        Rajdhani     Delhi          Banglore      4:45       4:55";
      cout<<"\n 2615        G.T.         Chennai        Delhi        17:30      17:40";
      cout<<"\n 2616        G.T.         Delhi          Chennai       5:20       5:30";
      cout<<"\n 7021        Dakshin      Hyderabad      Delhi        17:00      17:10";
      cout<<"\n 7022        Dakshin      Delhi          Hyderabad     9:15       9:25";
      }


      void main()
      {
       int gdriver=DETECT,gmode,errorcode;
       /* initialize graphics and local variables*/
       initgraph(&gdriver,&gmode,"");
       Frontpage();
       IndiaMap();
       int i;

       Reservation z;
       textcolor(3);
       char c[50];
       textbackground(0);
       do
       {
       int gdriver=DETECT,gmode,error;

       /* initialize graphics and local variables*/
       initgraph(&gdriver,&gmode,"");
       cleardevice();
       cout<<"**************************************************************************\n";
       cout<<"                                                                          \n";
       cout<<"                                                                          \n";
       cout<<"                                                                          \n";
       cout<<"                          **Welcome to Railway Reservation System**\n";
       cout<<"                                                                          \n";
       cout<<"                                                                          \n";
       cout<<"                                                                          \n";
       cout<<"**************************************************************************\n";
       cout<<"\n";
       cout<<"\n";
       cout<<"***************************************************************************\n";
       cout<<"   Press(1) for Booking a Ticket"<<"\n";
       cout<<"   Press(2) for Cancelling a Ticket"<<"\n";
       cout<<"   Press(3) for Checking the Status Trough PNR No."<<"\n";
       cout<<"   Press(4) for Time Table "<<"\n";
       cout<<"   Press(5) for Exit..."<<"\n";
       cout<<"***************************************************************************\n";
       cout<<"   Enter your choice:";
       cin>>i;
       if(i==3)
       {
	z.DisplayStatus();
       }
       if(i==1)
       {
	z.Booking();
	getch();
       }
       if(i==2)
       {
	z.Cancellation();
	getch();
       }
       if(i==4)
       {
	z.Timetable();
	getch();
       }

       }
       while(i!=5);
       }















































