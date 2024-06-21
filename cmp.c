#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int snakewatergun(char comp,char us);
int snakewatergun(char comp,char us)
{
  //return -1 if comp wins and 0 if draw and 1 if us wins
  if(us==comp) 
  return 0;
if(us=='s'&& comp=='w')
return 1;
else if(us=='w'&& comp=='s')
return -1;
if(us=='s' && comp=='g')
return -1;
else if(us=='g'&& comp=='s')
return 1;
 if(us=='w'&&comp=='g')
return 1;
else if(us=='g'&& comp=='w')
return -1;
}
int main()
{
srand(time(0));
int r=rand()%100+1;
 char comp,us;
 printf("enter s for snake,w for water,and g for gun: ");
 scanf("%c",&us); 
 if(r<33)
 comp='s';
else if(r>33 && r<66)
comp='w';
else
comp='g';
 int res=snakewatergun(comp,us);
 printf("U chose %c Computer chose %c\n",us,comp);
 if(res==1)
 {
    printf("HURRAY!!u won...");
 }
 else if(res==-1)
 {
    printf("Sorry u lose!\nWant to try it again?");
 }else
 printf("it is a draw\n");
 return 0;
}