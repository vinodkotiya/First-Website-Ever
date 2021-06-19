#include<iostream.h>
#include<conio.h>
#include<stdio.h>               //only for gets
//////////////////////////////////////////////////////////////////////////
//written by: vinod, I.T (iv)th sem
// Total hours: 1/2 + 1/2 + 2 = 3
//         date created : 30 jan 2003
//  modification1 :date 31 jan 2003 eliminate the getline error
//  modification2 :date 5-6 feb 2003 adding functions substring,textsearch
//                                   delete ets,dynamic memory allocation
//                                   for character arrays fails
//
//////////////////////////////////////////////////////////////////////////

void strconcat(char [],char []);
int strcompare(char [],char []);
void stringcopy(char [],char []);
int strlength(char []);
int search_char(char [],char );
int search_string(char [],char []);
void substring(char [],int ,int );
void delete_string(char [],char []);

void main()
{
 char choice;
 do
 {
  clrscr();
  int operation,returnholder;
  char string1[200],string2[100],text[1000];
  cout<<"\n-->>Enter the operation do you want to perform on strings \n"
  <<" 1. String Copy \n"<<" 2. Strings Comparison \n"
  <<" 3. String Concatenation \n"<<" 4. String Length \n"
  <<" 5. Search any character in a Text \n"
  <<" 6. Search any string in a Text \n"
  <<" 7. Display a substring of a given length from a given location \n"
  <<" 8. Search any string in a Text and delete it\n";
  cin>>operation;
  switch(operation)
  {
   case 1 :
     cout<<"\n-->>Enter the string to be copy : \n";
     gets(string2);
     stringcopy(string1,string2);
     cout<<"\nString has been copied   "<<string1;
     break;
   case 2 :
     cout<<"\n-->>Enter the first string  : ";
     gets(string1);
     cout<<"\n-->>Enter the second string to be compared with "<<string1<<endl;
     gets(string2);
     returnholder = strcompare(string1,string2);
     if(returnholder < 0)
      cout<<endl<<string1<<" is smaller than "<<string2<<" by ASCII value "<<returnholder;
     else if(returnholder > 0)
      cout<<endl<<string2<<" is smaller than "<<string1<<" by ASCII value "<<returnholder;
     else
      cout<<"\n Both "<<string1<<" and "<<string2<<" are equals";
     break;
  case 3 :
     cout<<"\n-->>Enter the first string  : ";
     gets(string1);
     cout<<"\n-->>Enter the second string to be concatinated with "<<string1<<endl;
     gets(string2);
     strconcat(string1,string2);
     cout<<"\nThe concatenated string is "<<string1;
     break;
   case 4 :
     cout<<"\n-->>Enter the string whose length to be measured : ";
     gets(string1);
     returnholder = strlength(string1);     //temperarly using operation for length
      cout<<"\nLength of the "<<string1<<" is "<<returnholder;
     break;
   case 5 :
     cout<<"\n-->>Enter any text\n";
     gets(text);
     cout<<"\n-->>Enter any character to be searched \n";
     cin>>choice;          //used temporarily for input
     returnholder = search_char(text,choice);
     if (returnholder == 1)
      cout<<"\nThe character "<<choice<<" is found in text ";
     else
      cout<<"\nThe character "<<choice<<" is not found in text ";
     break;
   case 6 :
     cout<<"\n-->>Enter any text\n";
     gets(text);
     cout<<"\n-->>Enter any string to be searched \n";
     gets(string2);
     search_string(text,string2);
     if (returnholder == 1)
      cout<<"\nThe character "<<string2<<" is found in text ";
     else
      cout<<"\nThe character "<<string2<<" is not found in text ";
     break;
   case 7:
     cout<<"\nFunction is : substring(\"yourtext\",2 ,length=3);  output:' urt'";
     cout<<"\n-->>Enter any text\n";
     gets(text);
     cout<<"\n-->>Enter the location from where you want to display your text \n";
     cin>>operation;     //used temporarily for arg
     cout<<"\n-->>Enter the length of substring you want to display \n";
     cin>>returnholder;  //used temporarily for arg passing
     substring(text,operation,returnholder);
     cout<<"\nSubstring is "<<text;
     break;
    case 8 :
     cout<<"\n-->>Enter any text\n";
     gets(text);
     cout<<"\n-->>Enter the string present in text to be deleted \n";
     gets(string2);
     delete_string(text,string2);
     cout<<"\nThe new text is "<<text;
     break;

   default:
   cout<<"\n-->>Please Enter any no (1/2/3/4/5/6/7)";
   }             //end of switch
  cout<<"\n-->>Do you want to continue (Y/N) :- ";
  cin>>choice;
 }while(choice == 'y' || choice == 'Y');
 getch();
}

//concate str2 at end of str1
void strconcat(char str1[],char str2[])
{
 int i=0,j=0;
 while(str1[i]!='\0')
  i++;       //measure the length of string1
 while (str2[j]!='\0')
  {
  str1[i+j]=str2[j];
  j++;
  }
 str1[i+j]='\0';

}

//copy str2 into str1
void stringcopy(char str1[],char str2[])
{
 int i;
 for(i=0;str2[i] != '\0';i++)
 str1[i]=str2[i];
 str1[i] = '\0';

}


//compare two strings and return ascii value of mismatch point
int strcompare(char str1[],char str2[])
{
 int i,asciidiff;
 for(i=0;str1[i] != '\0'||str2[i] != '\0' ;i++)
    asciidiff = str1[i] - str2[i] ;

 return asciidiff;
}
//calculate the length of text
int strlength(char string[])
{
  int length=0,i;
  for(i=0;string[i] != '\0' ;i++)
    length++;
 return length;
}
//search the character item in text
int search_char(char text[],char item)
{

 for(int i=0;text[i]!='\0';i++)
  {
  if(item == text[i])
   return 1;         //success
  }
 return 0;           //fail
}

//search the item in text
int search_string(char text[],char item[])
{
 int length,diff,j;
 length = strlength(item);
 char temp[100];           //dynamic allocation fails  //char *temp; temp = new char [length];
 for(int i=0;text[i]!='\0';i++)
  {
   for(j=0;j<length;j++)
     temp[j] = text[i+j];              //{*temp = *temp+j; *temp = text[i+j];}
     temp[j] ='\0';
    diff = strcompare(temp,item);
   if(diff == 0)
    return 1;                                              //success
   //{ delete [] temp;cout<<"\nSuccess";return 0;}         //success
  }
				     //delete [] temp;
 return 0;           //fail
}

//display the string starting from 'here' to length 'length' in 'text'
void substring(char text[],int here,int length)
{
 char temp[100];           //dynamic allocation fails  //char *temp; temp = new char [length];
 for(int i=here,j=0;text[i]!='\0'|| i<here+length ;i++,j++)
     temp[j] = text[i];
     temp[j] ='\0';
     stringcopy(text,temp);
}

//search the item in text and delete it
void delete_string(char text[],char item[])
{
 int length,diff,j;
 length = strlength(item);
 char temp[100];           //dynamic allocation fails  //char *temp; temp = new char [length];
 for(int i=0;text[i]!='\0';i++)
  {
   for(j=0;j<length;j++)
     temp[j] = text[i+j];              //{*temp = *temp+j; *temp = text[i+j];}
     temp[j] ='\0';
    diff = strcompare(temp,item);

   if(diff == 0)
    break;						  //success
   //{ delete [] temp;cout<<"\nSuccess";return 0;}         //success
  }
 j = j -length;
 for(i = i+j;text[i] != '\0';i++)				     //delete [] temp;
  text[i] = text[i+length];
  text[i] = '\0';
}
