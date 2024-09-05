#include <iostream>
using namespace std;
int main()
{
    int t, n, inp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> inp;
            sum += (i % 2 == 0) ? -inp : inp;
        }
        cout << sum << endl;
    }

    return 0;
}