#include <iostream>
#include<conio.h>
void main()
{
    unsigned int n;
    unsigned long long factorial = 1;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;    
    getch();
}
