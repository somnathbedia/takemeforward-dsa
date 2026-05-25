#include<bits/stdc++.h>
using namespace std;

int main()
{
    // [1,3,2,1,3] MAX = 12
    int n;
    cin>>n;
    int arr[n] = {1,3,2,1,3};
    // for(int i =0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }

    // precompute 
    int hash[13] = {0};
    for(int i = 0; i<n; i++)
    {
        hash[arr[i]] +=1;
    }

    
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    

    return 0;
}