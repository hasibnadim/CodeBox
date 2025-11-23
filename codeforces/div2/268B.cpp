// #268B

#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    unsigned long long  n = -1;
    unsigned long long com = 0;

    cin >> n;

    com = (((n - 1) * n * (n + 1)) / 6) + n;
    cout << com << "\n";

 

    return 0; 
}