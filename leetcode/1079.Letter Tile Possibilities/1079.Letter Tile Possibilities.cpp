#include <bits/stdc++.h>
using namespace std;



void backtracking(string& s,vector<bool> &visited,int &n,string &orig,set<string> &ans) {
    if (!s.empty())
        ans.insert(s);
    for(int i=0;i<n;i++) {
        if (visited[i]) continue;
        visited[i]=1;
        s.push_back(orig[i]);
        backtracking(s,visited,n,orig,ans);
        visited[i]=0;
        s.pop_back();
    }
}


int main() {
    string orig = "AAB";
    string s = "";
    int n = orig.size();
    vector<bool> visited(n,false);
    set<string> ans;
    backtracking(s,visited,n,orig,ans);
    cout << ans.size();
    return 0;
}