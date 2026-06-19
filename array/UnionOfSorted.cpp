#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};

    set<int> s;

    int i = 0,j=0;
    while(i < arr1.size() && j < arr2.size())
    {
        if(arr1[i] < arr2[j])
        {
            s.insert(arr1[i]);
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            s.insert(arr2[j]);
            j++;
        }else
        {
            s.insert(arr1[i]);
            i++;
            j++;
        }
    }

    while(i < arr1.size())
    {
        
            s.insert(arr1[i]);

        i++;
    }

    while(j < arr2.size())
    {
       
            s.insert(arr2[j]);
       
        j++;
    }

    for(auto i : s)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}