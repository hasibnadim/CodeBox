// #69E







// Unsolved

















//

#include <bits/stdc++.h>
using namespace std;
int findMaxUnique(deque<int> &dq)
{

    unordered_map<int, int> freqMap;
    for (int a : dq)
        freqMap[a]++;

    vector<int> uniqueElements;
    for (auto &pair : freqMap)
        if (pair.second == 1)
            uniqueElements.push_back(pair.first);

    // max elements of uniqueElements
    if (uniqueElements.empty())
    {
        return -1;
    }
    int maxValue = *max_element(uniqueElements.begin(), uniqueElements.end());
    return maxValue;
}
int main()
{
    int n, k, i;
    cin >> n >> k;
    deque<int> dq;
    while (n--)
    {
        cin >> i;
        if (dq.size() < k)
        {
            dq.push_back(i);
        }
        else
        {

            // max elements of uniqueElements
            int maxValue = findMaxUnique(dq);
            if (maxValue == -1)
            {
                cout << "-Nothing\n";
            }
            else
            {

                cout << maxValue << "-\n";
            }
            dq.pop_front();
            dq.push_back(i);
        }
    }
    int maxValue = findMaxUnique(dq);
    if (maxValue == -1)
    {
        cout << "-Nothing\n";
    }
    else
    {

        cout << maxValue << "-\n";
    }

    return 0;
}