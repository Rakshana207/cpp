//AUTHOR:K.Rakshana DATE:2-02-2023
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10,arr[n];
    cout<<"Enter the elements ";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"The elements are ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n"<<"The second smallest element is "<<arr[1];
}