//Author:K.Rakshana Kumari Date:21-8-23
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr; // cin>>arr[i] << vectors << push_back(var_nam)
    for(int i=0;i<n;i++)
    {
        int temp=0;
        cin>>temp;
        arr.push_back(temp);
    }
    // arr.push_back(45);
    // arr.push_back(12);
    // arr.pop_back();
    sort(arr.begin(),arr.end());  //asc
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    //cout<<"size"<<arr.size();
    return 0;
}