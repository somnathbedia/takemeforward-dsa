#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcdabefc";

    int hash[26] = {0};
    for(int i =0; i<s.size(); i++)
    {
        hash[s[i] - 'a']+=1;
    }

    for(int i =0; i<s.size(); i++)
    {
        cout<<hash[i]<<" ";
    }cout<<endl;

    char ch;
    cout<<"Enter char to see result: ";
    cin>>ch;

    cout<<hash[ch - 'a']<<endl;

    return 0;
}