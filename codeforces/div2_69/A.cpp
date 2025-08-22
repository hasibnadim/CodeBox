// #69A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, z;
    int ax = 0, ay = 0, az = 0;
    while (t--)
    {
        cin >> x >> y >> z;
        ax += x;
        ay += y;
        az += z;
    }
    if(ax == 0 && ay == 0 && az == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}