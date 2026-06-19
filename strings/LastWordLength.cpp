#include<bits/stdc++.h>
using namespace std;

int getLength(string s)
{
    int n = s.length();
    int i = n-1;
    int count=0;

    while(s[i] == ' ')
    {
        i--;
    }

    while(s[i] != ' ')
    {
        count++;
        i--;
    }

    return count;

}

int main()
{
    string s = " fly me to the moon   ";

    cout<<getLength(s)<<endl;

    return 0;
}