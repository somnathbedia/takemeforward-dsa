#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printFactors(int n)
{
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
            if((n/i) != i)
            {
                cout<<n/i<<" ";
            }
        }
    }
    cout<<endl;
}

bool checkPrime(int N)
{
    int count=0;
    for (int  i = 1; i * i <= N; i++)
    {
        if(N%i == 0)
        {
            count++;
            if((N/i) != i)
            {
                count++;
            }
        }
    }
    if(count == 2)
    {
        return true;
    }else
    {
        return false;
    }
    
}

int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;

    cout<<checkPrime(n)<<endl;

    return 0;
}