//p5 my friend swap data

#include<iostream.h>
#include<conio.h>

class newdist;
class olddist
{
 float feet,inch;
public:
 void get()
 {
	 cout<<"\nEnter feet"; cin>>feet;
	 cout<<"\nEnter inch"; cin>>inch; }
 void show()
 {
	 cout<<"\n"<<feet<<" feet  "<<inch<<" inch  "<<endl;
 }
 friend void swap(newdist , olddist);
};

class newdist
{
 float meter,cm;
public:

 void set()
 { cout<<"\nEnter meter";cin>>meter;
	 cout<<"\nEnter centimeter";cin>>cm;
 }

 void display()
 { cout<<"\n"<<meter<<" meter  "<<cm<<"  centimeter "<<endl;
 }
 friend void swap(newdist , olddist);
};

void swap(newdist naya ,olddist purana)
{
 float temp;
 temp = naya.meter;
 naya.meter = purana.feet ;
 purana.feet = temp;
 temp = naya.cm;
 naya.cm = purana.inch ;
 purana.inch = temp;
 cout<<"\nafter swapping ";
 purana.show();
 naya.display();
}

void main()
{
 clrscr();
 float sum;
 olddist purana;
 newdist naya;
 purana.get();
 naya.set();
 cout<<"\nBefore swapping ";
 purana.show();
 naya.display();
 cout<<"\nPress Enter to swap ";
 getch();
 swap(naya,purana);
getch();
}
