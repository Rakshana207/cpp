//AUTHOR:K.Rakshana DATE:31-1-2023
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,x,numbers[10];
    cout<<"Enter the integers\n";
    for(i=0;i<10;i++)
    {
        cin>> numbers[i];
    }
    cout<<"The integers are: \n";
    for(i=0;i<10;i++)
    {
        cout<< numbers[i]<< "\n";
    }
    cout<<"Enter number you want\n";
    cin>> x;
    int cnt=0;
    for(i=0;i<10;i++)
    {
        if(numbers[i]==x)
        {
            cout<<"number was found\n";
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"number was not found";
    }
    return 0;
}