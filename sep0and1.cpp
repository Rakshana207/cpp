//AUTHOR:K.Rakshana DATE:15-2-23
//c++ program to segregate 0s and 1s in an array
#include<bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        count++;
    }
    for(int i=0;i<count;i++)
    arr[i]=0;
    for(int i=count;i<n;i++)
    arr[i]=1;
}
void print(int arr[],int n)
{
    cout<<"\nAfter segregation of array,Resultant array is\n";
     for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;++i)
    cin>>arr[i];
    cout<<"The elements in the array are\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\n";
    segregate0and1(arr,n);
    print(arr,n);
    return 0;
}