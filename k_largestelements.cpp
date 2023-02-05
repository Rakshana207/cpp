//AUTHOR:K.Rakshana DATE:4-02-2023
#include<bits/stdc++.h>
using namespace std;

void kLargest(int arr[],int n,int k)
{
     cout<<"the "<<k<<" largest numbers are ";
    for(int i=0;i<k;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int n=10,arr[10],k;
    cout<<"Enter the elements"<<"\n";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+10);
    cout<<"The integers are "<<"\n";
    reverse(arr,arr+10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"Enter the value of k ";
    cin>>k;
    kLargest(arr,n,k);
    return 0;
}
