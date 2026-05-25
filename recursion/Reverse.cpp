#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print_reverse(int i,int arr[],int n)
{
    if(i>n-1)
        return;
    print_reverse(i+1,arr,n);
    cout<<arr[i]<<" ";
}

void reverse(int l, int h, int arr[])
{
    if(l>h)
    {
        return;
    }
    swap(arr[l],arr[h]);
    reverse(l+1,h-1,arr);
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // print_reverse(0,arr,n);

    reverse(0,n-1,arr);

    print(arr,n);

    return 0;
}