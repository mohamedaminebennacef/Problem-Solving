#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        string reorganizeString(string s) {
            vector<int> occ(26,0);
            for(auto f:s)
                occ[f-'a']++;            
            priority_queue<pair<int,int>> pq;
            for(int i=0;i<26;i++) {
                if (occ[i])
                    pq.push({occ[i],i});
            }
            string ans="";
            while (!pq.empty()) {
                pair<int,int> t=pq.top();
                pq.pop();
                if (pq.empty() && t.first>1) // malzouz eni nhothom ba7dha b3adhhom
                    return "";
                ans+=t.second+'a';
                if (!pq.empty()) // theni akbar we7d
                {
                    pair<int,int> t1 = pq.top();
                    pq.pop();
                    ans+=t1.second+'a';
                    if(t1.first-1) // idha fama ka3ba wenti sta3mltha 1-1 = 0
                        pq.push({t1.first-1,t1.second});
                }
                if (t.first-1)
                    pq.push({t.first-1,t.second});
            }
        }
};

int main() {
    Solution solution;
    cout << solution.reorganizeString("aaaaabbbbbcc");
} 