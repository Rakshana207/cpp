//AUTHOR:K.Rakshana DATE:1-02-2023
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,numbers[10];
    cout<<"Enter the integers\n";
    for(i=0;i<10;i++)
    {
        cin>> numbers[i];
    }
    cout<<"the integers are: \n";
    for(i=0;i<10;i++)
    {
        cout<< numbers[i]<< "\n";
    }
    int arr[0],max=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"the largest element is "<<max;
}