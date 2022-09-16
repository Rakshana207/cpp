//AUTHOR:K.Rakshana DATE:16-9-2022
#include<iostream>
using namespace std;
int main()
{
    int r,c,a[50][50],b[50][50],sum[50][50],i,j;

    cout<<"Enter number of rows:";
    cin>>r;

    cout<<"Enter number of columns:";
    cin>>c;

    cout<<endl<<"Enter elements of 1st matrix:"<<endl;

    //storing elements into 1st matrix entered by user.
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        cout<<"Enter element a" << i+1 << j+1 << ":";
        cin>>a[i][j];
    }
    //storing elements into 2nd matrix entered by user.
    cout<<endl<<"Enter elements of 2nd matrix:"<<endl;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        cout<<"Enter elements b"<< i+1 << j+1 << ":";
        cin>>b[i][j];
    }
    //Adding two matrices
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    sum[i][j]=a[i][j]+b[i][j];

    //Displaying the resultant sum matrix.
    cout<<endl <<"Sum of two matrices is :" << endl;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        cout << sum[i][j] << " ";
        if(j==c-1)
        cout<< endl;
    }
    return 0;
}