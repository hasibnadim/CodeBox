// #200B
#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    int t, n;
    cin >> t;
    n = t;  
    float pi = 0.0, i;
    while (t--)
    {
        cin >> i;
        pi += i/100.0; 
    }
    pi = (pi / n) * 100.0;
    cout << pi << "\n";
    return 0;
}