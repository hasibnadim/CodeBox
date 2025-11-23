// #1506A

#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    int t;
    cin >> t; 
    int n, m, x; 
    double ans;
    while (t--)
    {
        cin >> n >> m >> x;
        /**
         *  2 2 3
         * 
         * 
         *  1 2
         *  3 4
         * 
         * 3
         */
        cout << n+m+x << "\n";
    }

    return 0;
}