#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    for(int i=0;i<n;i++)
    {
        int a=0;
        cin>>a;
        s+=a;
    }
    cout<<s<<endl;
    return 0;
}