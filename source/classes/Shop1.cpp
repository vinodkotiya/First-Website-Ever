// P8 bookshop

#include<iostream.h>
#include<conio.h>
#include<string.h>

char chkname[20];            //GLOBAL VARIABLE STORE THE NAME TO BE SEARCHED
int j=0 ;
class shop
{
 private:                                 //DATA OF EACH BOOKS
	 float price;
	 int stock;
	 char title[20],author[20],publisher[20];
 public:

 void initialize( char[] , char[] , char[],float ,int );     //WILL INITIALIZE THE ATTRIBUTES
 void getbook()                            //GET THE BOOKNAME TO BE SEARCHED
 {
  cout<<"\nEnter the name of book :-  ";
  cin>>chkname;
 }
 int check();
 void stockes();
};
 int shop :: check()                     //SEARCH THE BOOK
 {
	int v;
	v=strcmpi(chkname,title);
	return v;
 }

 void shop :: stockes()                        //INTERACT WITH USER
	{
	 int copy;
	 char choice;
	 cout<<"\nThe book "<<chkname<<"  is available in the stock,"<<
		"\n The detail of the book is given below :->";
	 cout<<"\n**************************************************************************\n";
	 cout<<"\nName of the book is :->"<<title;
	 cout<<"\nAuthor is :-> "<<author<<"\nPrice:-> Rs."<<price<<"/-  each copy";
	 cout<<endl<<publisher;
	 cout<<"\n**************************************************************************\n";
	 cout<<"\nEnter How many copies do you want :-> ";
	 cin>>copy;

	 if(copy > stock)
	  {
	    cout<<"\nThe no. of copies you have entered is not available , We have "<<stock<<" no. of copies of the book"
	    <<chkname<<"Do You Want " <<stock<<"  No Of Copies  (Y/N):->";
	    cin>>choice;
	    if(choice == 'y' || choice == 'Y')
	      { cout<<"\nNo of required copies "<<stock<<"  are issued ";
		cout<<"\n The total price is :->"<<price*stock<< " /-";

	      }
	    else
		cout<<" Please visit our shop after one year ";
	  }

	else if(copy <= stock)
	    {	cout<<"\nNo of required copies"<<copy<<" are issued ";
		cout<<"\n The total price is :->"<<price*copy<<"/-";}
 }


void shop :: initialize(char t[20],char a[20],char p[20],float pr,int s)
{

 strcpy(title,t);
 strcpy(author,a);
 strcpy(publisher,p);
 price = pr;
 stock = s;
}
void main()
{
 clrscr();
 shop book[5];            //array of objects
 int k=2;
 char more;
 cout<<"\nWELL COME TO THE BOOK SHOP";                    //initialize the data
 book[0].initialize("C++","BALAGURUSAMY","Tata Mcgraw",130,10);
 book[1].initialize("OOPs","David Parson","Tata Mcgraw",100.60, 7);
 book[2].initialize("VC++","Herbert Shield","Prentice Hall",200,13);
 book[3].initialize("java","Chimu Singh","Tata Mcgraw",400, 3);
 book[4].initialize("Oracle","Timu Singh","Tata Mcgraw",1300, 1);
 do
 { clrscr();
   book[0].getbook();             //take the name of book
   for(int i=0;i<5;i++)           //search the book
   {
    k=book[i].check();
    if(k==0)
    break;
   }
  if(k!=0)
	cout<<" The Book Is Not Available ";
  else if(k == 0)
	book[i].stockes();
  cout<<"\nDo you want to buy more (Y/N):- ";
  cin>>more;
  }while(more== 'y'|| more == 'Y');    //loop
}
