#include<stdio.h>
#include<conio.h>
void main()
{
int n[]={1,2,3,4,5},k,i,x=0;
printf("enter the number\n");
scanf("%d",&k);
for(i=0;i<k;i++)
{
x=x+n[0];
n[0]++;
}
printf("%d",x);
getch()l;
}
