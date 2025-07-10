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
// int a[500005];

bool multi = true;

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(all(p), greater<int>());
    int wins = 0, chosenplayer = 0;
    int i = 0;
    while (i < n && wins < n && chosenplayer < n)
    {
        if (p[i] > d)
        {
            chosenplayer++;
            wins++;
        }
        else
        {
            int nbplayers = 1;
            int power = p[i];
            while (power <= d) {
                power += p[i];
                nbplayers++;
            }
            int unchosenplayer = n - chosenplayer;
            if (nbplayers > unchosenplayer)
                break;
            else
            {
                wins++;
                chosenplayer += nbplayers;
            }
        }
        i++;
    }
    cout << wins << endl;
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

    int t = 1;
    if (multi)
        cin >> t;
    while (t--)
        solve();
    return 0;
}