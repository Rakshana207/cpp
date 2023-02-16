//AUTHOR:K.Rakshana DATE:16-2-23
//C++ code to sort array in Wave Form
#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void sortInWave(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n-1;i+=2)
    {
        swap(&arr[i],&arr[i+1]);
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements in the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements are\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" \n";
    }
    sortInWave(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}