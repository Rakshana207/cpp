#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,input[100],zCount=0,pCount=0,nCount=0;
    cin>>n;
    int arr[n],max=arr[0];
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements are :\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    for(i=0;i<n;i++)
    {
        if(input[i]<0){
            nCount++;
        }
        else if(input[i]>0){
            pCount++;
        }
        else{
            zCount++;
        }
    }
    cout<<"Negative Numbers: "<<nCount<<endl;
    cout<<"Positive Numbers:"<<pCount<<endl;
    cout<<"Zeroes:"<<zCount<<endl;
    return 0;
}