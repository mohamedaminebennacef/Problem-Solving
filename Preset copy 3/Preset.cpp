#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

    int tt; cin >> tt;

    while(tt--) {
        int n; cin >> n;
        vector<pair<int,int>>a(n);

        for(auto &i : a) cin >> i.first >> i.second;

        sort(a.begin(), a.end(), [&](pair<int,int>&A, pair<int,int>&B){
            if(max(A.first, A.second) == max(B.first, B.second))   
                return min(A.first, A.second) < min(B.first, B.second);
            return max(A.first, A.second) < max(B.first, B.second);
        });

        for(auto &i : a) cout << i.first << " " << i.second << " ";
        cout << "\n";
    }
}