		          //PROGRAM FOR HEAPSORT
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<alloc.h>
#include<graphics.h>
#include<stdio.h>

int *a;
adjust(int a[],int i,int n);
heapify(int a[],int n);
heap(int a[],int n);

void main()
{
 clrscr();
 int n,i,l;
 a = new int[n];
 cout<<"enter the size of array\n";
 cin>>n;
 cout<<"enter the elements to be sorted:\n";
 for(i=1;i<=n;i++)
  {
   cin>>a[i];
  }
 heapify(a,n);
 heap(a,n);
 for(i=n;i>=2;i--)
 {

   int t=a[i];
   a[i]=a[1];
   a[1]=t;
   adjust(a,1,i-1);
   heap(a,n);
  }
heap(a,n);
getch();
}


			   //FUNCTION TO FORM THE HEAP

 heapify(int a[],int n)
{
  for (int i= floor(n/2);i>=1;i--)
 {
  adjust(a,i,n);
 }
}
			//FUNCTION FOR SORTING THE HEAP

 adjust(int a[],int i,int n)
 {
  int j=2*i;
  int item=a[i];
  while(j<=n)
   {
    if (j<n && a[j]<a[j+1])
    {
     j=j+1;
    }
    if (item>=a[j])
    break;
    else
    {
      a[floor(j/2)]=a[j];
      j=2*j;
    }
  }
 a[floor(j/2)]=item;
 return(0);
}


	  //FUNCTION TO INSERT GRAPHICS FEATURES IN THE OUTPUT

 heap(int *a,int n)
 {
  int gd=DETECT,gm,x,k,d,f;
  static int h=1;
  float e,j;
  char *s;
  initgraph (&gd,&gm,"");
  setfillstyle(SOLID_FILL,BLUE);
  floodfill(81,151,MAGENTA);
  if (h==1)
  {
   outtextxy(25,25,"THE MAXHEAP FORMED WITH THE GIVEN ELEMENTS IS:");
  }
  else
  {
   outtextxy(50,40,"THE HEAP FORMED AFTER SORTING IS:");
  }
  d=log(n)/log(2)+1;
  k=1;
  int counter=2;
  for(x=0;x<=d;x++)
   {
    e=pow(2,x-1);
   if(e==1)
     {
      circle( 240+25*j,70,20);
      if(n!=1)
      {
       line(240,89,220,120);
      }
      sprintf(s,"%d",a[k]);
      outtextxy(240+25*j,70,s);
      k++;
      if(k>n)
      goto x1;
     }
    else
    {
      for(j=(1-e);j<=(e-1);j+=2)
      {
       if(counter%8==0 && counter!=0)
       {
	j=j+1;
       }
      if(n!=2)
      {
       line(235+25,90,265+25,125);
      }
	sprintf(s,"%d",a[k]);
       if(counter>=8)
       {
	circle(230+22*j,x*70,20);
	outtextxy(230+22*j,x*70,s);
       }
	else
       {
       circle( 250+25*j,x*70,20);
       outtextxy(250+25*j,x*70,s);
       }

       k++;
       counter++;
       if(k>n)
       goto x1;
      }
    }
 }
x1:
j=1;
int c=0;
int b=1;
for(k=2;k<n-1;k++)
{
  if (c==4 && c!=0)
  {
   b=b+3;
   j=-1;
  }
   if(k%2==0)
   {
    line(188+28*j,135+22*b,134+43*j,165+25*b);
    c++;
   }
  else
  {
   line(150+35*j,128+22*b,146+47*j,174+21*b);
   c++;
  }
  j++;
 }
if (h<=n)
{
 outtextxy(20,350,"PRESS ANY NUMBER TO CONTINUE");
 h++;
 cin>>f;
}
}


