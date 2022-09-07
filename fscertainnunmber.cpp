//AUTHOR:K.Rakshana DATE:5-9-2022
#include<iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=1,nextTerm=0;
    cout<<"Enter a positive number";
    cin>>n;
    cout<<"Fibonacci series:"<<t1<<","<<t2<<",";
    nextTerm=t1+t2;
    while(nextTerm<=n)
    {
        cout<<nextTerm<<",";
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}