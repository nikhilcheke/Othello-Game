/* this is c program for othello game. give input as <row><enter><column><enter> */
#include<stdio.h>
char arr[8][8];
/********************************************************************************/
int legalmove1;
int legalmove2;
void rightscan2(int i,int j)
{
int count=1;
arr[i][j]='#';
int k=i;
int m=j;
m++;
while((arr[k][m]=='@')&&(m<8))
{
count++;
m++;
}
if(arr[k][m]=='#')
 {
   while(count)
   { j++;
   arr[i][j]='#';
   count--;
   }
  }
}

void downscan2(int i,int j)
{
int count=1;
arr[i][j]='#';
int k=i;
int m=j;
k++;
while((arr[k][m]=='@')&&(m<8))
{
count++;
k++;
}
if(arr[k][m]=='#')
 {
   while(count)
   { i++;
   arr[i][j]='#';
   count--;
   }
  }
}

void leftscan2(int i,int j)
{

int count=1;
arr[i][j]='#';
int k=i;
int m=j;
m--;
while((arr[k][m]=='@')&&(m<8))
{
count++;
m--;
}
if(arr[k][m]=='#')
 {
   while(count)
   { j--;
   arr[i][j]='#';
   count--;
   }
  }
}

void upscan2(int i,int j)
{
int count=1;
arr[i][j]='#';
int k=i;
int m=j;
k--;
while((arr[k][m]=='@')&&(m<8))
{
count++;
k--;
}
if(arr[k][m]=='#')
 {
   while(count)
   { i--;
   arr[i][j]='#';
   count--;
   }
  }
}

void downrightscan2(int i,int j)
{
int count=1;
arr[i][j]='#';
int k=i;
int m=j;
m++;
k++;
while((arr[k][m]=='@')&&(m<8))
{
count++;
m++;
k++;
}
if(arr[k][m]=='#')
 {
   while(count)
   { j++;
     i++;
   arr[i][j]='#';
   count--;
   }
  }
}

void upleftscan2(int i,int j)
{
int count=1;
arr[i][j]='#';
int k=i;
int m=j;
k--;
m--;
while((arr[k][m]=='@')&&(m<8))
{
count++;
k--;
m--;
}
if(arr[k][m]=='#')
 {
   while(count)
   { i--;
     j--;
   arr[i][j]='#';
   count--;
   }
  }
}
void uprightscan2(int i,int j)
{
int count=1;
arr[i][j]='#';
int k=i;
int m=j;
k--;
m++;
while((arr[k][m]=='@')&&(m<8))
{
count++;
k--;
m++;
}
if(arr[k][m]=='#')
 {
   while(count)
   {i--; 
    j++;
   arr[i][j]='#';
   count--;
   }
  }
}

void downleftscan2(int i,int j)
{
int count=1;
arr[i][j]='#';
int k=i;
int m=j;
k++;
m--;
while((arr[k][m]=='@')&&(m<8))
{
count++;
k++;
m--;
}
if(arr[k][m]=='#')
 {
   while(count)
   {i++; 
    j--;
   arr[i][j]='#';
   count--;
   }
  }
}


void ask2()
{ 
int i,j;
printf("\nplayer 2 enter your move\n");
scanf("%d%d",&i,&j);
if(arr[i][j+1]=='@')
  {rightscan2(i,j);}
if(arr[i][j-1]=='@')
  {leftscan2(i,j);}
if(arr[i-1][j]=='@')
  {upscan2(i,j);}
if(arr[i+1][j]=='@')
  {downscan2(i,j);}
if(arr[i+1][j+1]=='@')
  {downrightscan2(i,j);}
if(arr[i-1][j-1]=='@')
  {upleftscan2(i,j);}
if(arr[i+1][j-1]=='@')
  {downleftscan2(i,j);}
if(arr[i-1][j+1]=='@')
  {uprightscan2(i,j);}
}


void ask2a(int i,int j)
{ 
if(arr[i][j+1]=='@')
  {rightscan2(i,j);}
if(arr[i][j-1]=='@')
  {leftscan2(i,j);}
if(arr[i-1][j]=='@')
  {upscan2(i,j);}
if(arr[i+1][j]=='@')
  {downscan2(i,j);}
if(arr[i+1][j+1]=='@')
  {downrightscan2(i,j);}
if(arr[i-1][j-1]=='@')
  {upleftscan2(i,j);}
if(arr[i+1][j-1]=='@')
  {downleftscan2(i,j);}
if(arr[i-1][j+1]=='@')
  {uprightscan2(i,j);}
}
/********************************************************************************/

void rightscan1(int i,int j)
{
int count=1;
arr[i][j]='@';
int k=i;
int m=j;
m++;
while((arr[k][m]=='#')&&(m<8))
{
count++;
m++;
}
if(arr[k][m]=='@')
 {
   while(count)
   { j++;
   arr[i][j]='@';
   count--;
   }
  }
}


void downscan1(int i,int j)
{
int count=1;
arr[i][j]='@';
int k=i;
int m=j;
k++;
while((arr[k][m]=='#')&&(m<8))
{
count++;
k++;
}
if(arr[k][m]=='@')
 {
   while(count)
   { i++;
   arr[i][j]='@';
   count--;
   }
  }
}

void leftscan1(int i,int j)
{

int count=1;
arr[i][j]='@';
int k=i;
int m=j;
m--;
while((arr[k][m]=='#')&&(m<8))
{
count++;
m--;
}
if(arr[k][m]=='@')
 {
   while(count)
   { j--;
   arr[i][j]='@';
   count--;
   }
  }
}

void upscan1(int i,int j)
{
int count=1;
arr[i][j]='@';
int k=i;
int m=j;
k--;
while((arr[k][m]=='#')&&(m<8))
{
count++;
k--;
}
if(arr[k][m]=='@')
 {
   while(count)
   { i--;
   arr[i][j]='@';
   count--;
   }
  }
}

void downrightscan1(int i,int j)
{
int count=1;
arr[i][j]='@';
int k=i;
int m=j;
m++;
k++;
while((arr[k][m]=='#')&&(m<8))
{
count++;
m++;
k++;
}
if(arr[k][m]=='@')
 {
   while(count)
   { j++;
     i++;
   arr[i][j]='@';
   count--;
   }
  }
}

void upleftscan1(int i,int j)
{
int count=1;
arr[i][j]='@';
int k=i;
int m=j;
k--;
m--;
while((arr[k][m]=='#')&&(m<8))
{
count++;
k--;
m--;
}
if(arr[k][m]=='@')
 {
   while(count)
   { i--;
     j--;
   arr[i][j]='@';
   count--;
   }
  }
}
void uprightscan1(int i,int j)
{
int count=1;
arr[i][j]='@';
int k=i;
int m=j;
k--;
m++;
while((arr[k][m]=='#')&&(m<8))
{
count++;
k--;
m++;
}
if(arr[k][m]=='@')
 {
   while(count)
   {i--; 
    j++;
   arr[i][j]='@';
   count--;
   }
  }
}

void downleftscan1(int i,int j)
{
int count=1;
arr[i][j]='@';
int k=i;
int m=j;
k++;
m--;
while((arr[k][m]=='#')&&(m<8))
{
count++;
k++;
m--;
}
if(arr[k][m]=='@')
 {
   while(count)
   {i++; 
    j--;
   arr[i][j]='@';
   count--;
   }
  }
}


void ask1()
{ 
int i,j;
printf("\nplayer 1 enter your move\n");
scanf("%d%d",&i,&j);
if(arr[i][j+1]=='#')
  {rightscan1(i,j);}
if(arr[i][j-1]=='#')
  {leftscan1(i,j);}
if(arr[i-1][j]=='#')
  {upscan1(i,j);}
if(arr[i+1][j]=='#')
  {downscan1(i,j);}
if(arr[i+1][j+1]=='#')
  {downrightscan1(i,j);}
if(arr[i-1][j-1]=='#')
  {upleftscan1(i,j);}
if(arr[i+1][j-1]=='#')
  {downleftscan1(i,j);}
if(arr[i-1][j+1]=='#')
  {uprightscan1(i,j);}
}
void removedot()
{
int i,j;
for(i=0;i<8;i++)
{
for(j=0;j<8;j++)
 {
  if(arr[i][j]=='.')
     arr[i][j]='_';
 }
}
}
void printfun()
{
int k=0,i,j;
printf(" 0 1 2 3 4 5 6 7 \n");
for(i=0;i<8;i++)
{
printf("%d",k);
k++;
for(j=0;j<8;j++)
 {
 printf("%c",arr[i][j]);
 printf(" ");
 }
printf("\n");
}
printf("\n\n");
}

/***********************************************************************************/


/***********************************************************************************/
void rightmf1(int i,int j)
{
int k=i;
int m=j;
int flag=0;
m++;
 
while((arr[k][m]=='#')&&(m<8))
 {m++;flag=1;}
if((m<8)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[i-1][j]=='_')
      arr[k][m]='.';
      legalmove1++;
  }
}

void downmf1(int i,int j)
{
int k=i;
int m=j;
int flag=0;
k++;
while((arr[k][m]=='#')&&(k<8))
 {k++;flag=1;}
if((k<8)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[i][j-1]=='_')
      arr[k][m]='.';
      legalmove1++;
  }
}

void leftmf1(int i,int j)
{
int k=i;
int m=j;
int flag=0;
--m;
while((arr[k][m]=='#')&&(m>=0))
 {m--;
 flag=1;}
if(flag==1){
if(m>=0&&arr[k][m]=='_')
  {    
  // if(arr[k][m]=='_')
      arr[k][m]='.';
      legalmove1++;
  }
}
}

void upmf1(int i,int j)
{
int k=i;
int m=j;
int flag=0;
k--;
while((arr[k][m]=='#')&&(m>=0))
 {k--;flag=1;}
if((m>=0)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[i+1][j]=='_')
      arr[k][m]='.';
      legalmove1++;
  }
}

void downrightmf1(int i,int j)
{
int k=i;
int m=j;
int flag=0;
m++,k++;
while((arr[k][m]=='#')&&(m<8)&&(k<8))
 {m++,k++;flag=1;}
if((m<8)&&(k<8)&&(arr[k][m]=='_')&&(flag==1))
  {
   ///if(arr[i-1][j-1]=='_')
      arr[k][m]='.';
      legalmove1++;
  }
} 


void upleftmf1(int i,int j)
{
int k=i;
int flag=0;
int m=j;
m--,k--;
while((arr[k][m]=='#')&&(m>=0)&&(k>=0))
 {m--,k--;flag=1;}
if((m>=0)&&(k>=0)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[k][m]=='_')
      arr[k][m]='.';
      legalmove1++;
  }
} 

void uprightmf1(int i,int j)
{
int k=i;
int m=j;
int flag=0;
m--,k++;
while((arr[k][m]=='#')&&(m>=0)&&(k<8))
 {m--,k++;flag=1;}
if((m>=0)&&(k<8)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[k][m]=='_')
      arr[k][m]='.';
      legalmove1++;
  }
} 

void downleftmf1(int i,int j)
{
int k=i;
int m=j;
int flag=0;
m++,k--;
while((arr[k][m]=='#')&&(m<8)&&(k>=0))
 {m++,k--;flag=1;}
if((m<8)&&(k>=0)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[i+1][j-1]=='_')
      arr[k][m]='.';
      legalmove1++;
  }
} 

/***********************************************************************************/
void locOfMove1()
{
char ch='@';
int i,j;
legalmove1=0;
for(i=0;i<8;i++)
for(j=0;j<8;j++)
 {if(arr[i][j]=='@')
   { 
     
     rightmf1(i,j);
     leftmf1(i,j);
     upmf1(i,j);
     downmf1(i,j);
     upleftmf1(i,j);
     uprightmf1(i,j);
     downleftmf1(i,j);
     downrightmf1(i,j);  
   }
}
}

/************************************************************************************/
void rightmf2(int i,int j)
{
int k=i;
int m=j;
int flag=0;
m++;

while((arr[k][m]=='@')&&(m<8))
 {m++;flag=1;}
if((m<8)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[i-1][j]=='_')
      arr[k][m]='.';
      legalmove2++;
  }
}

void downmf2(int i,int j)
{
int k=i;
int m=j;
int flag=0;
k++;
while((arr[k][m]=='@')&&(k<8))
 {k++;flag=1;}
if((k<8)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[i][j-1]=='_')
      arr[k][m]='.';
      legalmove2++;
  }
}

void leftmf2(int i,int j)
{
int k=i;
int m=j;
int flag=0;
--m;
while((arr[k][m]=='@')&&(m>=0))
 {m--;
 flag=1;}
if(flag==1){
if(m>=0&&arr[k][m]=='_')
  {    
  // if(arr[k][m]=='_')
      arr[k][m]='.';
      legalmove2++;
  }
}
}

void upmf2(int i,int j)
{
int k=i;
int m=j;
int flag=0;
k--;
while((arr[k][m]=='@')&&(m>=0))
 {k--;flag=1;}
if((m>=0)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[i+1][j]=='_')
      arr[k][m]='.';
      legalmove2++;
  }
}

void downrightmf2(int i,int j)
{
int k=i;
int m=j;
int flag=0;
m++,k++;
while((arr[k][m]=='@')&&(m<8)&&(k<8))
 {m++,k++;flag=1;}
if((m<8)&&(k<8)&&(arr[k][m]=='_')&&(flag==1))
  {
   ///if(arr[i-1][j-1]=='_')
      arr[k][m]='.';
      legalmove2++;
  }
} 


void upleftmf2(int i,int j)
{
int k=i;
int flag=0;
int m=j;
m--,k--;
while((arr[k][m]=='@')&&(m>=0)&&(k>=0))
 {m--,k--;flag=1;}
if((m>=0)&&(k>=0)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[k][m]=='_')
      arr[k][m]='.';
      legalmove2++;
  }
} 

void uprightmf2(int i,int j)
{
int k=i;
int m=j;
int flag=0;
m--,k++;
while((arr[k][m]=='@')&&(m>=0)&&(k<8))
 {m--,k++;flag=1;}
if((m>=0)&&(k<8)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[k][m]=='_')
      arr[k][m]='.';
      legalmove2++;
  }
} 

void downleftmf2(int i,int j)
{
int k=i;
int m=j;
int flag=0;
m++,k--;
while((arr[k][m]=='@')&&(m<8)&&(k>=0))
 {m++,k--;flag=1;}
if((m<8)&&(k>=0)&&(arr[k][m]=='_')&&(flag==1))
  {
   //if(arr[i+1][j-1]=='_')
      arr[k][m]='.';
      legalmove2++;
  }
} 


/************************************************************************************/
void locOfMove2()
{
char ch='#';
int i,j;
legalmove2=0;
for(i=0;i<8;i++)
for(j=0;j<8;j++)
 {if(arr[i][j]=='#')
   { 
     rightmf2(i,j);
     leftmf2(i,j);
     upmf2(i,j);
     downmf2(i,j);
     upleftmf2(i,j);
     uprightmf2(i,j);
     downleftmf2(i,j);
     downrightmf2(i,j);  
   }
}
}

int main()
{
int i,j,k,player,score1=0,score2=0,hard,s1=0,s2=0;
int val=32,count=1;
int p,q,r,s,temp,tmp=0;

for(i=0;i<8;i++)
for(j=0;j<8;j++)
 arr[i][j]='_';

arr[3][3]='#';
arr[4][4]='#';
arr[3][4]='@';
arr[4][3]='@';
printf("\nwelcome to othello game!\nPress 1 for SINGLE PLAYER\nPress 2 for 2 PLAYER\n");
scanf("%d",&player);
if(player==1)
{


printf("player 1-- @\n");
printf("computer-- #\n");
printf("enter difficulty level: 1 or 2\n");
scanf("%d",&hard);
while(val)
{
count=0;
printfun();
locOfMove1();
if(legalmove1!=0)
{
printfun();
removedot();
ask1();
printfun();
score1++;
}
else
{
printf("\nplayer 1 dont have moves\n");
}
locOfMove2();
if(legalmove2!=0)
{
printfun();

for(p=0;p<8;p++)
for(q=0;q<8;q++)
{
if(arr[p][q]=='.')
{
temp=tmp;
tmp=p+q;
if(tmp>temp){r=p;s=q;}
}

}
score2++;
removedot();
ask2a(r,s);

}
else
{
printf("\ncomputer dont have moves\n");
}

s1=0;s2=0;
for(i=0;i<8;i++)
{
for(j=0;j<8;j++)
{
if(arr[i][j]=='@')
  {s1++;}
if(arr[i][j]=='#')
  {s2++;}
}
}


if((legalmove1==0)&&(legalmove2==0)&&((s1+s2)<64))
{
printf("\n MATCH DRAW !!!\n");
return 0;
}
 //val=64-count;
 /// val=val-1;
  //val=count;


  val=64-(s1+s2);
}

}

if(player==2){

printf("player 1-- @\n");
printf("player 2-- #\n");
while(val)
{
count=0;
printfun();
locOfMove1();
if(legalmove1!=0)
{
printfun();
removedot();
ask1();
printfun();
score1++;
}
else
{
printf("\nplayer 1 dont have moves\n");
}
locOfMove2();
if(legalmove2!=0)
{
printfun();
removedot();
ask2();
printfun();
score2++;
}
else
{
printf("\nplayer 2 dont have moves\n");
}

s1=0;s2=0;
for(i=0;i<8;i++)
{
for(j=0;j<8;j++)
{
if(arr[i][j]=='@')
  {s1++;}
if(arr[i][j]=='#')
  {s2++;}
}
}

if((legalmove1==0)&&(legalmove2==0)&&((s1+s2)<64))
{
printf("\n MATCH DRAW !!!\n");
return 0;
}
 ///val=64-count;
  // val=val-1;
  //val=count;
val=64-(s1+s2);
}
}

s1=0;s2=0;
for(i=0;i<8;i++)
{
for(j=0;j<8;j++)
{
if(arr[i][j]=='@')
  {s1++;}
if(arr[i][j]=='#')
  {s2++;}
}
}
printf("\nscore of player1 is %d",s1);
printf("\nscore of player2/computer is %d",s2);

if(s1>s2)
printf("\ncongratulations !! You won \n \t%d Vs %d",s1,s2);
else if(s1<s2)
printf("\nYour opponent won ! \n \t%d Vs %d\n",s1,s2);
else
printf("match draw !!");


return 0;
}
