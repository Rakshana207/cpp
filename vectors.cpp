//AUTHOR:K.Rakshana Kumari
//vectors basic
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n,temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}