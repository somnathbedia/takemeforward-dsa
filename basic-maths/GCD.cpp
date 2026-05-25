#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{

    int a=20,b=15;

    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        }else{
            b=b%a;
        }

    }

    if(a==0)
    {
        cout<<b<<" \n";
    }else
    {
        cout<<a<< " \n";
    }

    return 0;
}