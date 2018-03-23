#include<stdio.h>
#include<conio.h>
#include<math.h>
voi main()
{
 int n,t=0,r,q;
 printf("Enter the number: ");
 scanf("%d",&n);
 q=n;
 do
 {
      r=q%10;
      t=t+pow(r,2);
      q=q/10;
 }
 while(q%10!=0);
 printf("%d",t);
 getch();
}
