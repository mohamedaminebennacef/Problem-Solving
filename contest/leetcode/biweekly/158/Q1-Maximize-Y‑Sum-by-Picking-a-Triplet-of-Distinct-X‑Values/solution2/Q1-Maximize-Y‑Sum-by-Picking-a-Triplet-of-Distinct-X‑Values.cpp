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
    priority_queue<pair<int, int>> pq;
    int cnt = 3;
    int sum = 0;
    for (int i = 0; i < n; i++)
        pq.push({y[i], i});
    unordered_set<int> st;
    while (cnt > 0 && !pq.empty())
    {
        int num = pq.top().first;
        int idx = pq.top().second;
        pq.pop();
        if (!st.count(x[idx]))
        {
            cnt--;
            sum += num;
            st.insert(x[idx]);
        }
    }
    return cnt > 0 ? -1 : sum;
}

int main()
{
    vector<int> x = {1, 2, 1, 2};
    vector<int> y = {4, 5, 6, 7};
    cout << maxSumDistinctTriplet(x, y) << endl;
}