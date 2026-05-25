#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPalindrome(string s, int i,int n)
{
    if(i >= n/2) return true;
    if(s[i] != s[s.size()-i -1 ]) return false;

    return isPalindrome(s,i+1,n);
}

int main()
{

    string s = "madams";
    int n = s.size()-1;

    cout<<isPalindrome(s,0,n);

    return 0;
}