//AUTHOR:K.Rakshana DATE:8-9-2022
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,temp;
    cout<<"Enter the number";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
        }
        if(temp==sum)
        cout<< "Armstrong Number."<<endl;
        else
        cout<<"Not Armstrong Number."<<endl;
        return 0;
}