#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //int
    int maximumRobots(vector<int>& charge, vector<int>& cost, long long budget) {
        int n = charge.size();
        multiset<int> st;
        long long sm = 0;
        int i=0,j=0;
        long long ans = 0;
        long long d,mx;
        while (j<n) {
            d=j-i+1;
            mx=!st.empty() ? max(*st.rbegin(),charge[j]) : charge[j];
            if (mx+(sm+cost[j])*d>budget) {
                ans=max(ans,d-1);
                if(!st.empty()) {
                    st.erase(st.find(charge[i]));
                    sm-=cost[i];
                }
                i++;
                if(i>j)
                    j=i;
            } else {
                st.insert(charge[j]);
                sm+=cost[j];
                j++;
                if(j==n)
                    ans = max(ans,d);
            }
        }
        return ans;
    }
};

int main() {
    vector<int> chargeTimes = {3,6,1,3,4}, runningCosts = {2,1,3,4,5};
    int budget = 25;
    Solution solution;
    cout << solution.maximumRobots(chargeTimes, runningCosts,budget);
    return 0;
}