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

int minEatingSpeed(vector<int> &piles, int h)
{
    if (piles.size() == 1)
        return (piles[0] + h - 1) / h;
    sort(all(piles));
    vector<long long> ans;
    long long l = 1, r = *max_element(all(piles)), k;
    while (l < r)
    {
        k = l + (r - l) / 2;
        long long cnt = 0;
        for (int p : piles)
            cnt += (p + k - 1) / k;
        if (cnt <= h)
            r = k;
        else
            l = k + 1;
    }
    return l;
}

int main()
{
    vector<int> piles = {332484035, 524908576, 855865114, 632922376, 222257295, 690155293, 112677673, 679580077, 337406589, 290818316, 877337160, 901728858, 679284947, 688210097, 692137887, 718203285, 629455728, 941802184};
    int h = 823855818;
    cout << minEatingSpeed(piles, h);
    return 0;
}