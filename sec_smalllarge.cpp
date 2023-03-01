//AUTHOR:K.Rakshana DATE:5-02-2023
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"\nelements in the array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nThe second smallest number is "<<arr[1]<<"\n";
    cout<<"The second highest number is "<<arr[n-2];
}
