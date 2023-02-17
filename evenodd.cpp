// C++ program to segregate even and odd elements of array
#include <iostream>
using namespace std;
 
void swap(int *a, int *b);
 
void segregateEvenOdd(int arr[], int n)
{
    int left = 0, right = n-1;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
            left++;
 
        while (arr[right] % 2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i = 0;
    segregateEvenOdd(arr,n);
    cout<<"Array after segregation ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}