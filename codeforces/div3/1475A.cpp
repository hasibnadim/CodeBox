// 1475A
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

int main()
{
    int t;
    cin >> t;
    ll n;
    while (t--)
    {
        cin >> n;
        // while (n%2 == 0 && n > 2)
        // {
        //     n /= 2;
        // }

        // if(n > 2 && n % 2 != 0)
        // {
        //     cout << "YES\n";
        // }
        // else
        // {
        //     cout << "NO\n";
        // }
        if (n & (n - 1))
        {
            yes;
        }
        else
        {
            no;
        }
        }

    return 0;
}