/* in bubble sort we just put largest element of array at the end of the array then in next iteration this process repeats.
 in selection sort we first find the lowest element of array and then assign it to first index and in next iteration the process repeats.
 in insertion sort we continue our steps from start and switch adjacent index once we find element smaller ahead of greater. and process repeats. */
#include<iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
   for (int i = 1; i < n; i++) {
    int current = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > current) {
      //swap
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = current;
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
  insertion_sort(a , n);
  for(int i = 0; i< n; i++)
  {
      cout<<a[i]<<" ";
  }
}