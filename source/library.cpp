/*
 THIS PROGRAM IS TO DEFINE A CLASS AS LIBRARY AND PERFORM ALL THE FUNCTION
 OF LIBRARY MANAGEMENT BY USING CLASSES AND OBJECT
*/
# include <iostream.h>
# include <conio.h>
# include <stdio.h>
# include <process.h>

class library
  {
  private:
    int bkno;
    char bkname[20],auth[20],pub[20];
    float price;
    int copies;
    int issues;
  public:
    library() // constructor that is assigning initial values
     {
     copies=10;
     price=150.50;
     }
    void input();
    void issue();
    void rtbook();
    void disp();
   };

 void library :: input()
   {
   clrscr();
   cout<<" enter the book number "<<"\n";
   cin>>bkno;
   cout<<" enter the book name"<<"\n";
   gets(bkname);
   cout<<" enter the author name "<<"\n";
   gets(auth);
   cout<<" enter the publisher name "<<"\n";
   gets(pub);
   cout<<" enter the no. of copies you want to issue ";
   cin>>issues;
   }

  void library::issue()
    {
    if (issues>copies)
      {
      cout<<" The book is not available ";
      exit(0);
      }
    else
      cout<<" The book is available "<<"\n";
    }

  void library::rtbook()
    {
    clrscr();
    int bookr;
    cout<<" enter the book number ";
    cin>>bookr;
     if (bookr==bkno)
       {
       cout<<" the book has been returned ";
       }
     else
       cout<<" the book no. you have entered is wrong ";
     }

 void main()
  {
  library book;
  book.input();
  book.issue();
  book.rtbook();
  book.disp();
  }