#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> points = {{1,1},{3,4},{-1,0}};
    int n = points.size();
    int distance = 0;
    for (int i = 0; i < n-1 ; i++)
    {
    int x1 = points[i][0];
    int y1 = points[i][1];

    int x2 = points[i+1][0];
    int y2 = points[i+1][1];

    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    distance += (min(dx,dy) + abs(dx-dy));
    }
    cout<<distance<<endl;

    return 0;
}