#include<bits/stdc++.h>
using namespace std;

void rotate(int* arr, int n)
{
    int temp = arr[0];
    for(int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void clockwiseRotation(int* arr,int n)
{
    int temp = arr[n-1];
    int i = n-2;
    while(i>=0)
    {
        arr[i+1] = arr[i];
        i--;
    }
    arr[n-n] = temp;
}

void print(int* arr,int n)
{
    for(int i =0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    //rotate(arr,n);
    clockwiseRotation(arr,n);
    print(arr,n);
    return 0;
}