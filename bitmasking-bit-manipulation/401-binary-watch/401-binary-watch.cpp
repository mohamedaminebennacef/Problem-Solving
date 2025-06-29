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


int main()
{  
    vector<string> res;
    string time = "";
    int turnedOn = 2;
    for (int h = 0; h < 12; h++)
    {
        int left = turnedOn - __builtin_popcount(h);
        for (int m = 0; m < 60; m++)
        {
            if (left - __builtin_popcount(m) == 0)
            {
                time += to_string(h) + ":";
                if (m < 10)
                    time += "0" + to_string(m);
                else
                    time += to_string(m);
                    res.push_back(time);
            }
            time = "";
        }
    }
    cout << res.size() << endl;
    for (string t : res)
        cout << t << " ";
    cout << endl;

    return 0;
}