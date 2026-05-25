#include<bits\stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int arr[n] = {1,2,3,1,3,2};

    // pre-computation
    map<int,int> mpp;
    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter num to see frequency: ";
    cin>>q;
    cout<<mpp[q]<<endl;

    return 0;
}