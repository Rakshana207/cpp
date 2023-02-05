//AUTHOR:K.Rakshana DATE:2-02-2023
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,arr[10];
    cout<<"Enter the integers\n";
    for(i=0;i<10;i++)
    {
        cin>> arr[i];
    }
     sort(arr,arr+10);
    cout<<"the integers are: \n";
    for(i=0;i<10;i++)
    {
        cout<< arr[i]<< "\n";
    }
        cout<<"the second largest element is "<<arr[8];
}
