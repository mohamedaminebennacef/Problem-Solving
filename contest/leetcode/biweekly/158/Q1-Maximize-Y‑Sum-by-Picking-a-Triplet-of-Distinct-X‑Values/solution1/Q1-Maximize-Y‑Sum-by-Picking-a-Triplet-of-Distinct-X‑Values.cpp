#include <bits/stdc++.h>
#define pb push_back
#define sz(a) (int)a.size()
#define all(a) a.begin(), a.end()
#define f first
#define s second
#define pii pair<int, int>
#define vi vector<int>
using namespace std;

int maxSumDistinctTriplet(vi &x, vi &y)
{
    int n = sz(x);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.pb({y[i], x[i]});
    auto criteria = [&](pii a, pii b)
    {
        return a.first > b.first;
    };
    sort(all(v), criteria);
    vi ans = {v[0].f};
    vi trip = {v[0].s};
    for (int i = 1; i < n; i++)
    {
        if (find(all(trip), v[i].s) == trip.end())
        {
            trip.pb(v[i].s);
            ans.pb(v[i].f);
            if (trip.size() == 3)
                break;
        }
    }
    return ((trip.size() != 3) ? -1 : accumulate(all(ans), 0));
}

int main()
{
    vector<int> x = {1, 2, 1, 3, 2};
    vector<int> y = {5, 3, 4, 6, 2};
    cout<<maxSumDistinctTriplet(x, y)<<endl;
}