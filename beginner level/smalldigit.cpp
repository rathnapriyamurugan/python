#include<iostream.h>
#include<conio.h>
int temp = arr[0];
   for(int i=0; i<n; i++)
   {
      if(temp>arr[i])
      {
         temp=arr[i];
      }
   }
   return temp;
}
void main()
{
   int n;
   cout<<"Enter the size of array: ";
   cin>>n; int arr[n-1];
   cout<<"Enter array elements: ";
   for(int i=0; i<n; i++)
   {
      cin>>arr[i];
   }
   int smallest = findSmallestElement(arr, n);
   cout<<"Smallest Element is: "<<smallest;
   getch();
}
