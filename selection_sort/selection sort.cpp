#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void selectionSort(int arr[], int n)
{
    int i,j,min_in;
    for(i=0;i<n;i++)
    {
        min_in = i;
        for(j=i+1;j<n;j++)
            if (arr[j] < arr[min_in])
                min_in = j;
        swap(arr[i],arr[min_in]);
    }
}

int main()
{
    int n,i,j,temp;;
    cout<<"Enter size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Unsorted Array :";
    print(arr,n);
    selectionSort(arr,n);
    cout<<"Sorted Array :";
    print(arr,n);
    return(0);
}