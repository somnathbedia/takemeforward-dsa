#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void explainPair()
{
    pair<int,int> p = {32,56};

    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> p2 = {12,{33,44}};

    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};

    cout<<arr[0].first<<endl;
}
void explainVector();
int main()
{
    // 13:43 to continue
    explainVector();

    return 0;
}

void explainVector()
{
    vector<int> v;
    v.push_back(4);
    v.emplace_back(5);

    cout<<v.at(0)<<endl;

    vector<pair<int,int>> v1;

    v1.push_back({67,68});
    v1.emplace_back(4,7);

}

