#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
 
int main()
{
    freopen("../input.txt","r",stdin);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, a = 0, b = 0, count = 0, prev = 0;
        bool first = false;
        cin >> n >> m;
        vector<vector<char>> v(n);
        for (ll j = 0; j < n; j++)
        {
            for (ll k = 0; k < m; k++)
            {
                char c;
                cin >> c;
                if (c == '#' && first == false)
                {
                    b = k;
                    first = true;
                }
                if (c == '#')
                    count++;
                v[j].push_back(c);
            }
            if (count >= prev)
            {
                a = j;
                prev = count;
            }
            count = 0;
        }
        cout << a + 1 << " " << b + 1 << endl;
    }
    return 0;
}