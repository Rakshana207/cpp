//AUTHOR:K.Rakshana date:20-8-23
#include<bits/stdc++.h>
using namespace std;
// mutliple array 
void fill(int n,vector<int>&v) //
{

    for(int i=0;i<n;i++)
    {
        int temp=0;
        cin>>temp;
        v.push_back(temp);
    }
}
void get(int n,vector<int>&arr)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
}
int main()
{
    int x,y;
    cin>>x>>y;
    vector<int>arr;
    vector<int>a;
    fill(x,arr);
    fill(y,a);
    get(x,arr);
    cout<<endl;
    get(y,a);
    return 0;
}
