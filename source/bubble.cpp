#include<iostream.h>
#include<conio.h>

//funtion take array and length as argument and sort it
void bubblesort(int a[],int length)
{
 for(int i = 0;i<length-1;i++)
  {
   for(int j = i+1; j <= length-1;j++)
   {
    if(a[i] > a[j])
     {
      int temp;
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
     }    //end of if
   }       //end of for j
 }        //end of for i
}         //end of fun

void main()
{
 int arr[6];
 for(int i=0;i<6;i++)
  {
   cout<<"\nEnter Element : - ";
   cin>>arr[i];
  }
  bubblesort(arr,6);
  cout<<"\nArray after Bubble Shorting : - \n";
  for( i=0;i<6;i++)
  {
  cout<<arr[i]<<endl;
  }
 getch();
}