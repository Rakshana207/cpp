#include<bits/stdc++.h>
using namespace std;

void selectionsort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min]);
            min=j;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    cout<<"Given array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectionsort(a,n);
    cout<<"\n Sorted array is: \n";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}