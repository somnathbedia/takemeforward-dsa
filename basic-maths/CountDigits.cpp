#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int digitCounter(int n)
{
    int count=0;
    while(n>0)
    {
        int last_digit=n%10;
        count=count+1;
        n=n/10;
    }
    return count;
}

int reverse(int n)
{
    int temp=n;
    int rev=0;
    while(n>0)
    {
        int last_digit=n%10;
        n=n/10;

        rev=(rev*10) + last_digit;
    }
    // cout<<"reverse of "<<temp<<" is "<<rev<<endl;
    return rev;
}

bool palindrome(int n)
{
    if (n == reverse(n))
    {
        return true;
    }else
    {
        return false;
    }
}

void armstrong(int n)
{
    int sum=0,temp=n;
    int total_digit = digitCounter(n);
    while(n)
    {
       int digit=n%10;
       sum=sum+ pow(digit,total_digit);
       n=n/10; 
    }
    if(sum==temp){
        cout<<"Armstrong Number\n";
    }else
    {
        cout<<"Not a armstrong number\n";
    }
}

int main()
{
    int n;
    cout<<"Enter Digit ";
    cin>>n;


    cout<<n <<" has total "<<digitCounter(n)<<" digits\n";
    cout<<palindrome(n)<<endl;
    armstrong(n);
    return 0;
}