//AUTHOR:K.Rakshana DATE:16-2-23
//C++ code to sort 0s,1s,2s in an array
#include<bits/stdc++.h>
using namespace std;

void sort012(int a[],int n)
{
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high)
    {
        switch(a[mid]){
            case 0:
            swap(a[low++],a[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(a[mid],a[high--]);
            break;
        }
    }
}

int main()
    {
        int n;
        cout<<"Enter the value of n\n";
        cin>>n;
        int a[n];
        cout<<"Enter the elemnts \n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"The final Array is \n";
        sort012(a,n);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
         }

