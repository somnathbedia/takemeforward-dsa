#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {3,4,5,2};
    int largest=arr[0],slargest=-1;
    for(int i = 0; i < 4; i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }

    }
    cout<<slargest<<endl;
    return 0;
}