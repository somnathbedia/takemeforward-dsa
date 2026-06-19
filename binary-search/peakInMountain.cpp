#include<bits/stdc++.h>
using namespace std;

int peakIndex(vector<int>& arr,int n)
{
    int i = 0;

    while(i < n-2)
    {
        if(arr[i]>arr[i+1])
        {
            break;
        }
        i++;
    }

    return i;
}

int main()
{
    vector<int> arr = {0,2,1,0};
    int n = arr.size();

    cout<<peakIndex(arr,n)<<endl;

    return 0;
}