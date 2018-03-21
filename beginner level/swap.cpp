#include <iostream>
#include<conio.h>
int main()
{
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    getch();
}
