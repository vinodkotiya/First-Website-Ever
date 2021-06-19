//p4 my friend
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
	cout<<"\nEnter inch"; cin>>inch;
 }
 void show()
 {
	cout<<feet<<" feet  "<<inch<<"  inch "<<endl;
 }
 friend float converter(newdist , olddist);
};

class newdist
{
 float meter,cm;
public:
 void set()
 {
	 cout<<"\nEnter meter ";cin>>meter;
	 cout<<"\nEnter centimeter ";cin>>cm;
 }
 void display()
 {
	cout<<"\n"<<meter<<" meter  "<<cm<<"  centimeter "<<endl;
 }
 friend float converter(newdist , olddist);
};

float converter(newdist naya ,olddist purana)
{
 naya.meter = (purana.feet * (0.3) + naya.meter);
 naya.cm = ((purana.inch * (2.4) + naya.cm));
 naya.display();
 return (naya.meter + (naya.cm/100));
}

void main()
{
 clrscr();
 float sum;
 olddist purana;
 newdist naya;
 purana.get();
 naya.set();
 purana.show();
 naya.display();
 cout<<"\nPress Enter to convert & add";
 getch();
 sum = converter(naya,purana);
 cout<<"\n Sum is = "<<sum<<" m ";
 getch();
}
