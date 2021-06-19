#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
char field[3][3];

char check(void);
void init_field(void);
void get_player_move(void);
int get_computer_move();
void disp_field();

void main(void)
{
 clrscr();
 int call; //used only to call get_computer_move
 char done = ' ';
 char responce;
 cout<<"      TIC-TAC-TOE\nCREATED BY VINOD KOTIYA ";
 init_field();
 do
  {
   disp_field();
   get_player_move();
   done = check();
   if (done != ' ')  //if check returns X or O or D(draw) then break
   break;
   call = get_computer_move();
   done = check();

  }while(done == ' ');
  disp_field();
  if (done == 'X')
  {
   cout<<"You won|\n Do you want to play again ?(Y/N): - ";
   responce = getche();
   if(responce == 'Y' || responce == 'y')
    main();
   else
    exit(0);
  }
  else if(done == 'O')
  {
   cout<<"Computer won|\nDo you want to play again ? (Y/N) :- ";
   responce = getche();
   if(responce == 'Y' || responce == 'y')
    main();
   else
    exit(0);
  }
  else
  {
   cout<<"Game is Draw\n Do you want to play again ? (Y/N) :- ";
   responce = getche();
   if(responce == 'Y' || responce == 'y')
    main();
   else
    exit(0);
  }

  getch();
}

void init_field(void)
{
 int i,j;
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   field[i][j] = ' ';
}

void get_player_move(void)
{
 int x,y;
 char v=179,h=196;
 cout<<"\nEnter X,Y co-ordinates of your move :- \n X =  ";
 cin >> x;
 cout<<"\n Y =  ";
 cin >> y;
 if (x == 0)
 exit(0);        //to esc from game press 0
 x--;y--;/* b/c field is an array */
 if(field[x][y]!= ' ' || x> 2 || y > 2)
  {
   cout<<"\nInvalid move,Enter only (X= ,Y= ) \n\n (1,1) "<<v<<" (1,2) "<<v<<" (1,3)\n";
  cout<<h<<h<<h<<h<<h<<h<<h<<v<<h<<h<<h<<h<<h<<h<<h<<v<<h<<h<<h<<h<<h<<h<<h;
  cout<<"\n (2,1) "<<v<<" (2,2) "<<v<<" (2,3) \n";
  cout<<h<<h<<h<<h<<h<<h<<h<<v<<h<<h<<h<<h<<h<<h<<h<<v<<h<<h<<h<<h<<h<<h<<h;
    cout<<"\n (3,1) "<<v<<" (3,2) "<<v<<" (3,3) \n\nTry Again";
   get_player_move();
  }
  else field[x][y] = 'X';
}

int get_computer_move(void) //return type int only for breaking the function when computer played his turn
{
 int i,j;
 int played=0;//means com not played
 /*for(i = 0;i<3;i++)
  {
   for(j =0;j<3;j++)
    if(field[i][j] == ' ')
    break;
    if(field[i][j] == ' ')
    break;
  }
  if(i*j ==4)
  {
   cout<<"\nDraw";
   exit(0);
   }
  else
   field[i][j] = 'O';*/

   //computer search O for triplets

  for(i=0;i<3;i++)    /* check rows for winning*/
   {
   if(field[i][0] == 'O' && field[i][1] == 'O' && field [i][2] == ' ')
     {field[i][2] = 'O';played = 1;}
   else if(field[i][0] == 'O' && field[i][2] == 'O' && field[i][1] == ' ')
     {field[i][1] = 'O';played = 1;}
   else if(field[i][1] == 'O' && field[i][2] == 'O' && field[i][0] ==' ')
     {field[i][0] = 'O';played = 1;}
   }
  if(played == 1)
   return 0; //break;            //com turns over so exit from loop

  for(j=0;j<3;j++)    /* check cols for winning */
   {
   if(field[0][j] == 'O' && field[1][j] == 'O'&& field [2][j] == ' ')
    {field[2][j] = 'O';played = 1;}
   else if(field[0][j] == 'O' && field[2][j] == 'O'&& field [1][j] == ' ')
    {field[1][j] = 'O';played = 1;}
   else if(field[1][j] == 'O' && field[2][j] == 'O' && field [0][j] == ' ')
    {field[0][j] = 'O';played = 1;}
   }
  if(played ==1)
  return 0;//break;         //com turns over so exit from loop
    // check digonal for winning
  if (field [0][0] =='O' && field [1][1] == 'O' && field [2][2] == ' ')
   {field[2][2] = 'O';played = 1;}
  else if (field [0][0] =='O' && field [2][2] == 'O' && field [1][1] == ' ')
   {field[1][1] = 'O';played = 1;}
  else if (field [1][1] =='O' && field [2][2] == 'O' && field [0][0] == ' ')
   {field[0][0] = 'O';played = 1;}
  else if (field [0][2] =='O' && field [1][1] == 'O'&& field [2][0] == ' ')
   {field[2][0] = 'O';played = 1;}
  else if (field [0][2] =='O' && field [2][0] == 'O' && field [1][1] == ' ')
   {field[1][1] = 'O';played = 1;}
  else if (field [1][1] =='O' && field [2][0] == 'O'&& field [0][2] == ' ')
   {field[0][2] = 'O';played = 1;}
  if(played ==1)
  return 0; //break;         //com turns over so exit from loop


   //computer will search dobled X to block

 for(i=0;i<3;i++)    /* check rows for blocking*/
   {
   if(field[i][0] == 'X' && field[i][1] == 'X' && field [i][2] == ' ')
     {field[i][2] = 'O';played = 1;}
   else if(field[i][0] == 'X' && field[i][2] == 'X' && field[i][1] == ' ')
     {field[i][1] = 'O';played = 1;}
   else if(field[i][1] == 'X' && field[i][2] == 'X' && field[i][0] ==' ')
     {field[i][0] = 'O';played = 1;}
   }
  if(played == 1)
   return 0; //break;            //com turns over so exit from loop

  for(j=0;j<3;j++)    /* check cols for blocking */
   {
   if(field[0][j] == 'X' && field[1][j] == 'X'&& field [2][j] == ' ')
    {field[2][j] = 'O';played = 1;}
   else if(field[0][j] == 'X' && field[2][j] == 'X'&& field [1][j] == ' ')
    {field[1][j] = 'O';played = 1;}
   else if(field[1][j] == 'X' && field[2][j] == 'X' && field [0][j] == ' ')
    {field[0][j] = 'O';played = 1;}
   }
  if(played ==1)
  return 0;//break;         //com turns over so exit from loop
    // check digonal for blocking
  if (field [0][0] =='X' && field [1][1] == 'X' && field [2][2] == ' ')
   {field[2][2] = 'O';played = 1;}
  else if (field [0][0] =='X' && field [2][2] == 'X' && field [1][1] == ' ')
   {field[1][1] = 'O';played = 1;}
  else if (field [1][1] =='X' && field [2][2] == 'X' && field [0][0] == ' ')
   {field[0][0] = 'O';played = 1;}
  else if (field [0][2] =='X' && field [1][1] == 'X'&& field [2][0] == ' ')
   {field[2][0] = 'O';played = 1;}
  else if (field [0][2] =='X' && field [2][0] == 'X' && field [1][1] == ' ')
   {field[1][1] = 'O';played = 1;}
  else if (field [1][1] =='X' && field [2][0] == 'X'&& field [0][2] == ' ')
   {field[0][2] = 'O';played = 1;}
  if(played ==1)
  return 0; //break;         //com turns over so exit from loop


	      //normal tricks
  if (field [1][1] == ' ' )
  field [1][1] = 'O';
  else if(field [2][2] == ' ' )
  field [2][2] = 'O';
  else if (field [2][0] == ' ' )
  field [2][0] = 'O';
  else if (field [0][2] == ' ' )
  field [0][2] = 'O';
  else if (field [0][0] == ' ' )
  field [0][0] = 'O';
  else if (field [1][0] == ' ' )
  field [1][0] = 'O';
  else if (field [1][2] == ' ' )
  field [1][2] = 'O';
  else if (field [2][1] == ' ' )
  field [2][1] = 'O';
  else if(field[0][1] == ' ')
  field [0][1] = 'O';
  else
  cout<<"\n vinner";
  return 0 ;
}

void disp_field(void)
{
 int t;
 char ver_line = 179,h = 196; //draw vertical & horizontal line of field 3X3
 cout<<endl;
 for(t=0;t<3;t++)
  {
   cout<<"\t\t\t\t "<<  field[t][0] <<"   " <<ver_line<<" "<< field [t][1] << "  " <<ver_line<<" "<<field [t][2];
   if(t!=2)
   cout<<"\n\t\t\t\t "<<h<<h<<h<<h<<ver_line<<h<<h<<h<<h<<ver_line<<h<<h<<h<<h<<"\n";
  }
  cout<<endl;
}

char check(void)
{
 int i;
 int draw = 1;
 for(i=0;i<3;i++)    /* check rows */
  if(field[i][0] == field[i][1] && field[i][1] == field[i][2])
  return field[i][0];

 for(i=0;i<3;i++)   /* check col */
  if(field[0][i] == field[1][i] && field[0][i] == field[2][i])
  return field[0][i];
		    /* check digonal*/
 if (field[0][0] == field[1][1] && field[1][1] == field[2][2])
 return field[0][0];
 if (field[0][2] == field[1][1] && field[1][1] == field[2][0])
 return field[0][2];
	      //check draw or not by searching ' '
 for(int p=0;p<3;p++)
  for(int q=0;q<3;q++)
   if(field[p][q] == ' ')
   draw++;
 if (draw == 1) //no ' ' found
  return 'D';

 return ' ';
}

