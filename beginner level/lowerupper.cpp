#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  clrscr();
  char str[20];
  int i;
  cout<<"Enter the String: ";
  cin>>str;
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  cout<<"\nThe String in Uppercase = "<<str;
  getch();
}
