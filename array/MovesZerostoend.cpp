#include<bits/stdc++.h>
using namespace std;

void moves(vector<int> &arr, int n)
{
    int i = 0;
    
    while(i<n && arr[i]!=0)
    {
        i++;
    }
    int j = i+1;

    while(j < n)
    {
        if(arr[j] != 0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
}

void print(vector<int> &arr)
{
    for(int el:arr)
    {
        cout<<el<<" ";
    }cout<<endl;
}

int main()
{
    vector<int> arr = {1,0,2,3,2,0,4,5,1};
    int n = arr.size();
    moves(arr,n);
    print(arr);
    return 0;
}