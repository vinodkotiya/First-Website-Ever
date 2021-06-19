#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<c:\third\creators.h>
char more;

float last_result = 0;
int total_op = 0;
class calc
{
 float a,b,result;
 public:
 void set(float op1, float op2)
 {
   a = op1;
   b = op2;
  }
 void sum ()
 {
	result = a + b;
	//last_result = result;
	total_op++;
 }
 void min ()
 {
	result = a - b;
	//last_result = result;
	total_op++;

 }
 void multi ()
 {
	result = a * b;
	//last_result = result;
	total_op++;

 }
 void div ()
 {
	result = a / b;
	//last_result = result;
	total_op++;

 }
 void showresult()
 {  //                 cout<<a<<b;
	if(more!='Y')
	 exit(0);
	cout<<"\nThe result is --> "<<result;
	cout<<"\nThe last result was --> "<<last_result;
	cout<<"\ntotal operations are -->"<<total_op;
	last_result = result;
 }
};
void main()
{
 clrscr();
 calc cal;
 more = creators();
 do
	{
	 float op1,op2;
	 char operation;
	 cout<<"\nEnter operand1\n";
	 cin>>op1;
	 cout<<"\nEnter operation (+ - * /)\n";
	 cin>>operation;
	 cout<<"\nEnter second operand\n";
	 cin>>op2;
	 cal.set(op1,op2);
	 if (operation == '+')
		cal.sum() ;
	 else if (operation == '-')
		cal.min();
	 else if (operation == '*')
		cal.multi();
	 else if (operation == '/')
		cal.div();
	 else
	 {
		cout<<"The Operation is not valid";
		goto label;
	 }
	 cal.showresult();
	 label:
	 cout<<"\nDo you want to reuse the calculator (Y/N):- ";
	 cin>>more;
	 }while(more== 'y'|| more == 'Y');    //loop
}


/*char creators()            //display creators
{
 cout<<"****************************************************************************";
 char n1[7] = {"Vinod,"},n2[10] = {"Digvijay,"},n3[8] = {"Sameer,"},n4[9] = {"Peeyush,"},n5[8] = {"Vishwas"};
 cout<<"\nCreated by "<<n1<<n2<<n3<<n4<<n5;
	cout<<"\n****************************************************************************\n";
 return n2[5];
} */