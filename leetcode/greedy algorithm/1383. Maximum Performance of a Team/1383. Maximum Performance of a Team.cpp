#include <bits/stdc++.h>
#define ll long long
#define pp pair<int,int> // efficiency speed
using namespace std;

class Solution {
    public :
        const static int m = 1e9+7;
        int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
            vector<pp> v;
            for (int i=0;i<n;i++)
                v.push_back({e[i],s[i]});
            sort(v.begin(),v.end(),greater<pp>()); // decroissant(parcours melewl) sorted by efficiency
            ll ans = 0;
            if (k==1) // ne5tar element bark
            {
                for(int i=0;i<n;i++)
                    ans = max(ans,e[i]*1ll*s[i]);
                return ans;
            }
            k--;
            ll sm = 0;
            //priority_queue<int> pq; akber element fi top
            priority_queue<int,vector<int>,greater<int>> pq; // min fl top
            for(int i=0;i<n;i++)
            {
                ll a = v[i].second; // speed
                ll mi = v[i].first; // efficiency
                ans = max(ans,mi*(a+sm));
                    //efficiency*(speed+somme)

                if (pq.size()<k) {
                    pq.push(a);
                    sm+=a;
                } else if(pq.top() < a) {
                    sm-=pq.top();
                    pq.pop();
                    pq.push(a);
                    sm+=a;
                }
            }
            return ans%m;           
        } 
};

int main() {
    Solution solution;
    int n = 6 ;
    vector<int> speed = {2,10,3,1,5,8};
    vector<int> efficiency = {5,4,3,9,7,2};
    int k = 3;
    cout << solution.maxPerformance(6,speed,efficiency,k);
    return 0;
}   