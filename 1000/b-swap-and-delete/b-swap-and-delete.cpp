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
    string s;
    cin >> s;
    
    int n = s.length(), cnt0 = count(all(s),'0'), cnt1 = n - cnt0;
    string t;
    int i = 0;

    while (cnt0 >= 0 && cnt1 >= 0)
    {
        if (s[i] == '0' && cnt1 > 0) {
            t += '1';
            cnt1--;
        }
        else if (s[i] == '1' && cnt0 > 0) {
            t += '0';
            cnt0--;
        }
        else 
            break;
        i++;
    }
    cout << s.length() - t.length() << endl;
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
    {
        solve();
    }
    return 0;
}