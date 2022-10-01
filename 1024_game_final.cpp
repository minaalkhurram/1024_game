#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>

using namespace std;
int row = 4, col = 4,m=0,score,x;
int matrix[4][4]={{0,0,0,0},{1,0,0,0},{0,0,1,0},{0,0,0,0}};
void intro1()
{


cout<<"\n\n\n\n\n\n";
cout<<"\t\t\t\t\t+++++++ WELCOME ++++++++";
cout<<"\n\n\n\t\t\t\t   +++++++ TO THE MOST EPICC +++++++";
cout<<"\n\n\n\t\t\t       ++++++++++++++ 1024 GAMEEEE ++++++++++++++";

cout<<"\n\n\n\n\n\n\n\t\t\t\t press any digit to start the game ";
int n=getch();

}
void ins()
{
	cout<<"\n\n\n\t\t\tRULES:";
	cout<<"\n\n\n\t\t\t1. combine similar tiles to make the number 1024";
	cout<<"\n\n\n\t\t\t2. If the board becomes full you loose";
	cout<<"\n\n\n\t\t\t3. press u for up,l for left, r for right, d for down";
	cout<<"\n\n\n\t\t\tpress any key to start playing";
	int n=getch();
	
}
void intro()
{//display
	cout<<"\n\n\n\n\t\t\t      MINAAL AND AIZA'S";
	cout<<"\n\t\t\t       1024 GAME!!!!!   \n";	
}
void display()
{
	system("CLS");
   intro();

    cout<<"\t\t\t   _____________________"<<endl;
	for (int i = 0; i < 4; i++)
	{
		 //outputs the array
	     
		cout<<"\t\t\t   |";
	
		for (int j = 0; j < 4; j++)
		{
		    
			if(matrix[i][j]==0)
			{
				cout<<"____";
			}
			else if(matrix[i][j]!=0&&matrix[i][j]<10)
			{
			cout<<"___"<<matrix[i][j];
			}
			else if(matrix[i][j]!=0&&matrix[i][j]>10&&matrix[i][j]<100)
			{
	         	cout<<"__"<<matrix[i][j];
	}
		else if(matrix[i][j]!=0&&matrix[i][j]>100&&matrix[i][j]<1000)
		cout<<"_"<<matrix[i][j];
			else if(matrix[i][j]!=0&&matrix[i][j]>1000)
			cout<<matrix[i][j];
		cout<<"|";
		
		}
	
		cout << endl;
		
	}
	   


	cout<<"\n\n\t\t\tSCORE :"<<score;
}
void down()
{
//down key function
//checks if similar numbers arenext to each other and adds them
   for(int i=3;i>-1;i--)
   {
   	int check=0,check1=0;
   	for(int j=3;j>-1;j--)
   	{
   		if(check==matrix[j][i]&&check!=0)
   		{
   			score=score+(check+check);
   			matrix[check1][i]=check+check;
   			matrix[j][i]=0;
   			check=0;
   			x=-1;
		   }
		   if(matrix[j][i]!=0)
		   {
		   	check=matrix[j][i];
		   	check1=j;
		   }
   		
	   }
   	
   	
   }//shifts all the numbers to empty spaces downwards
  for (int k= 3; k >= -1 ; k--) 
    {
        for (int j = 4; j > 0 ; j--) 
        {
            for (int i = 3; i >= 0 ; i--) 
            {
            	int c;
            	c=i-1;
                if (matrix[i][k] == 0 && matrix[c][k] != 0) 
                {
                    matrix[i][k] = matrix[c][k];
                    
                    matrix[c][k] = 0;
                    x=-1;
                  
                }
            }
        }
    }
  

	
	
	
}
void up()
{
//up key function
//checks if similar numbers arenext to each other and adds them
   
   for(int i=0;i<4;i++)
   {
   	int check=0,check1=0;
   	for(int j=0;j<4;j++)
   	{
   		if(check==matrix[j][i]&&check!=0)
   		{
   			score=score+(check+check);
   			matrix[check1][i]=check+check;
   			matrix[j][i]=0;
   			check=0;
   			 x=-1;
		   }
		   if(matrix[j][i]!=0)
		   {
		   	check=matrix[j][i];
		   	check1=j;
		   }
   		
	   }
   	
   	
   }//shifts all the numbers to unoccupied spaces upwards
  for (int k= 0; k < 4; k++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            for (int i = 0; i < 3; i++) 
            {
            	int c;
            	c=i+1;
                if (matrix[i][k] == 0 && matrix[c][k] != 0) 
                {
                    matrix[i][k] = matrix[c][k];
                    
                    matrix[c][k] = 0;
                   x=-1;
                }
            }
        }
    }
   	
}

void left()
{//up key function
//checks if similar numbers arenext to each other and adds them

   for(int i=0;i<4;i++)
   {
   	int check=0,check1=0;
   	for(int j=0;j<4;j++)
   	{
   		if(check==matrix[i][j]&&check!=0)
   		{
   			score=score+(check+check);
   			matrix[i][check1]=check+check;
   			matrix[i][j]=0;
   			check=0;
   			 x=-1;
		   }
		   if(matrix[i][j]!=0)
		   {
		   	check=matrix[i][j];
		   	check1=j;
		   }
   		
	   }
   	
   	
   }//shifts to the left
  for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
            	int c;
            	c=k+1;
                if (matrix[i][k] == 0 && matrix[i][c] != 0) 
                {
                    matrix[i][k] = matrix[i][c];
                    
                    matrix[i][c] = 0;
                   x=-1;
                }
            }
        }
    }
 
}
void right()
{
	
//right key function
//checks if similar numbers arenext to each other and adds them
   
   for(int i=3;i>= 0;i--)
   {
   	int check=0,check1=0;
   	for(int j=3;j>= 0;j--)
   	{
   		if(check==matrix[i][j]&&check!=0)
   		{
   			score=score+(check+check);
   			matrix[i][check1]=check+check;
   			matrix[i][j]=0;
   			check=0;
   			 x=-1;
		   }
		   if(matrix[i][j]!=0)
		   {
		   	check=matrix[i][j];
		   	check1=j;
		   }
   		
	   }
   	
   	
   }//shifts to right
  for (int i = 3; i >= 0 ; i--) 
    {
        for (int j = 0; j < 4; j++) 
        {
            for (int k = 3; k > 0; k--) 
            {
            	int c;
            	c=k-1;
                if (matrix[i][k] == 0 && matrix[i][c] != 0) 
                {
                    matrix[i][k] = matrix[i][c];
                    
                    matrix[i][c] = 0;
                   x=-1;
                }
            }
        }
    }

}
	
void check()
{
	//checks if any number in the array is - tp the winning number k
	int k=1024, n=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(matrix[i][j]==k)
			{
				m=-1;//for winning
			}
			
		}
		
	}

		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(matrix[i][j]==0)
			{
				n=1;//
			}
			
		}
		
	}
		if(n!=1&&m!=-1)
		{
		m=1;
		display();
	}
	}
	


void generate()
{
	int row,col;
	//generates a random row and col number until that array index is zero and replaces the xero index with 1
	srand(time(0));
	do{
	row=(rand()%4);
	col=(rand()%4);
}while(matrix[row][col]!=0);
if(matrix[row][col]==0&&row<4&&col<4)
{
	matrix[row][col]=1;

}
}

void check2()
{
	int h=0;
	  for(int i=3;i>-1;i--)
   {
   	int check=0,check1=0;
   	for(int j=3;j>-1;j--)
   	{
   		if(check==matrix[j][i]&&check!=0)
   		{
   		
   	
   			h=-1;
		   }
		   if(matrix[j][i]!=0)
		   {
		   	check=matrix[j][i];
		   	check1=j;
		   }
   		
	   }
}
	      for(int i=3;i>= 0;i--)
   {
   	int check=0,check1=0;
   	for(int j=3;j>= 0;j--)
   	{
   		if(check==matrix[i][j]&&check!=0)
   		{
   			
   			 h=-1;
		   }
		   if(matrix[i][j]!=0)
		   {
		   	check=matrix[i][j];
		   	check1=j;
		   }
   		
	   }
}
	   for(int i=0;i<4;i++)
   {
   	int check=0,check1=0;
   	for(int j=0;j<4;j++)
   	{
   		if(check==matrix[j][i]&&check!=0)
   		{
   			 h=-1;
		   }
		   if(matrix[j][i]!=0)
		   {
		   	check=matrix[j][i];
		   	check1=j;
		   }
   		
	   }
}
	
	

  for(int i=0;i<4;i++)
   {
   	int check=0,check1=0;
   	for(int j=0;j<4;j++)
   	{
   		if(check==matrix[i][j]&&check!=0)
   		{
   		
   			 h=-1;
		   }
		   if(matrix[i][j]!=0)
		   {
		   	check=matrix[i][j];
		   	check1=j;
		   }
   		
	   }
}

if(h!=0)
m=0;


	
}

void win()
{ //function to display message when player wins

	system("CLS");
	cout<<"\n\n\t\t\t";
	for(int n=0;n<30;n++)
	{
		cout<<"*";
	}
	cout<<"\n\n\t\t\t\t YOU WINNN !!!!!!! ";
	cout<<"\n\n\t\t\t";

	
  for(int n=0;n<30;n++)
	{
		cout<<"*";
	}
		cout<<"\n\n\t\t\t\t YOUR SCORE : "<<score;
	cout<<"\n\n\t\t\t";		
  for(int n=0;n<30;n++)
	{
		cout<<"*";
	}
	cout<<"\n\n";
}
void over()
{
		system("CLS");
	cout<<"\n\n\t\t\t";

	cout<<"\n\n\t\t\t\t GAME OVER ";
	cout<<"\n\n\t\t\t";

	cout<<"\n\n\t\t\t\t YOUR SCORE : "<<score;
	cout<<"\n\n\t\t\t";		

	cout<<"\n\n";
	
	
}
int main()
{
    intro1();
    system("cls");
    ins();
	//loop executes until the board is full or the game is won      
 while(m!=-1&&m!=1)
    {
    x=1;
                display();
   
    char command=getch();
    if(command=='u')
    {
        up();
       
}
    
    else if(command=='r')
    {
       right();
       
   }
  else if(command=='l')
   {
      left();
       
    }
    else if(command=='d')
    {
        down();
       
   } 
   
   
 if(x==-1)
   generate();
            check();
            if(m==1)
            {
              check2();	
			}
        
}

   if(m==-1)
   {display();
    win();
}
   else if(m==1)
     over();
	return 0;
}
