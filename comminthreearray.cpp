//AUTHOR:K.Rakshana DATE:17-2-23
// C++ program to print common elements in three arrays
#include <bits/stdc++.h>
using namespace std;

void findCommon(int ar1[], int ar2[], int ar3[], int n1,
				int n2, int n3)
{
	int i = 0, j = 0, k = 0;
	while (i < n1 && j < n2 && k < n3) {
		if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
			cout << ar1[i] << " ";
			i++;
			j++;
			k++;
		}
		else if (ar1[i] < ar2[j])
			i++;
		else if (ar2[j] < ar3[k])
			j++;
		else
			k++;
	}
}

int main()
{
	int n1;
    cout<<"Enter the number of integers in array 1\n";
    cin>>n1;
    int ar1[n1];
    cout<<"Enter the elements\n";
    for(int i=0;i<n1;i++)
    cin>>ar1[i];
    int n2;
    cout<<"Enter the number of elements in array 2\n";
    cin>>n2;
    int ar2[n2];
    cout<<"Enter the elements\n";
    for(int i=0;i<n2;i++)
    cin>>ar2[i];
    int n3;
    cout<<"Enter the number of elements in array 3\n";
    cin>>n3;
    int ar3[n3];
    cout<<"Enter the elements\n";
    for(int i=0;i<n3;i++)
    cin>>ar3[i];
    cout<<"All the 3 arrays are\n";
    cout<<"1st Array\n";
    for(int i=0;i<n1;i++)
    cout<<ar1[i]<<"\t";
    cout<<"\n2nd Array\n";
    for(int i=0;i<n2;i++)
    cout<<ar2[i]<<"\t";
    cout<<"\n3rd Array\n";
    for(int i=0;i<n3;i++)
    cout<<ar3[i]<<"\t";
	cout << "\nCommon Elements are\n ";
	findCommon(ar1, ar2, ar3, n1, n2, n3);
	return 0;
}

