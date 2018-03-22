#include <iostream>
#include<conio.h>
void main()
{
    int n, rev = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    while(n != 0)
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number = " << rev;
    getch();
}
