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
    sort(numbers,numbers+10);
    cout<<"the integers are: \n";
    for(i=0;i<10;i++)
    {
        cout<< numbers[i]<< "\n";
    }
    int arr[0],max1,max2,max3;
    max3=max1=max2=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>max1)
        {
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3) 
             max3=arr[i];
    }
    cout<< "three largest elements are "<<max1<<","<<max2<<","<<max3;
}