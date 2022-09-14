/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void selection_sort(int a[], int n)
{
    int i,j,min;
    for ( i = 0 ; i < n ; i ++)
    {
        min = i;
        for ( j = i +1 ; j < n ; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main()
{
    cout<<"enter size of array";
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    selection_sort(a,n);
    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
}

