#include <iostream.h>
#include<conio.h>
void factors(int n)
{
int z = 2;
while (z * z <= n)
{
    if (n % z == 0)
    {   
        cout << z;
        n = (n / z);
    }
    else
    {
        z++;
    }
}
if (n > 1)
    {cout << n << "\n";}
}
int main()
{
int x;
cout << "Input positive integer greater than 1: ";
cin >> x;
factors(x);
cout << "The result: " << x;
getch();
}
