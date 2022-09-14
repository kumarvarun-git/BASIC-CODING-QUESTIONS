# in bubble sort we just put largest element of array at the end of the array and in next iteration this process repeats.
# in selection sort we first find the lowest element of array and then assign it to first index and in next iteration the process repeats.
# in insertion sort we continue our steps from start and switch adjacent index once we find element smaller ahead of greater. and process repeats.
#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for ( int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < n - i - 1 ;j++)
        {
            if (a[j] > a[j+1])
            {
               int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
  int n;
  cout<<"enter no of elements";
  cin>>n; 
  int *a = new int[n];  
  for(int i = 0; i< n; i++)
  {
      cin>>a[i];
  }
  bubble_sort(a , n);
  for(int i = 0; i< n; i++)
  {
      cout<<a[i]<<" ";
  }
}