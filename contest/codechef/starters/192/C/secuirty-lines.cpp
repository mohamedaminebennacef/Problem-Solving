#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
#define endl "\n"
int a[500005];

bool multi = true;

void solve()
{
    int numberOfQueues;
    cin >> numberOfQueues;
    vector<int> queueSizes(numberOfQueues);
    for (int i = 0; i < numberOfQueues; i++)
        cin >> queueSizes[i];
    int minimumTimeRequired = INT_MAX;
    for (int i = 0; i < numberOfQueues; i++)
    {
        int currentQueueSize = queueSizes[i];
        int totalTime;
        if (i == 0)
            totalTime = currentQueueSize;
        else
        {
            int peopleRemaining = max(0, currentQueueSize - i + 1);
            totalTime = i + peopleRemaining;
        }
        minimumTimeRequired = min(minimumTimeRequired, totalTime);
    }
    cout << minimumTimeRequired << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int q = 1;
    if (multi)
        cin >> q;
    while (q--)
    {
        solve();
    }
    return 0;
}