#include <bits/stdc++.h>
using namespace std;


// class Solution {
// public:
//     bool differs_single_letter(string word1,string word2) {
//         int nbdiff = 0;
//         for(int i=0;i<word1.size();i++) {
//             if (word1[i] != word2[i]) {
//                 nbdiff++;
//             }
//         }
//         return nbdiff == 1;
//     }
//     // nsn3ou lgraph o ncompariw
//     vector<string> get_possible_values(string word,vector<string> wordList) {
//         vector<string> possible_values;
//         for(int i=0;i<wordList.size();i++) {
//             if (differs_single_letter(word,wordList[i])) {
//                 possible_values.push_back(wordList[i]);
//             }
//         }
//         return possible_values;
//     }
//     vector<vector<string>> findLadders(string beginWord,string endWord,vector<string>& wordList) {
//         vector<vector<string>> ans;
//         vector<string> state;
//         // if (is_valid())
//         //     return;
//         vector<string> possible_values = get_possible_values(beginWord,wordList);
//         for(string pv:possible_values) {
//             state.push_back(p);
//             findLadders(wordList);
//             state.pop_back();
//         }
//     }
// };

// class Solution {
// public:
//     void length(string &src, string &dest, string curr, map<string, vector<string>> &graph, int cnt, int &ans, map<string, bool> &vis) {
//         if (curr == dest) {
//             ans = min(ans, cnt);
//             return;
//         }

//         for (auto child:graph[curr]) {
//             if (vis.count(child) && vis[child]) continue;
//             vis[child] = 1;
//             length(src, dest, child, graph, cnt+1, ans, vis);
//             vis[child] = 0;
//         }
//     }

//     void backtrack(string &src, string &dest, vector<string> &curr, map<string, vector<string>> &graph, set<vector<string>> &res, map<string, bool> &vis, int &l) {
//         if (curr.size() > l)
//             return ;

//         if (curr[curr.size() - 1] == dest && curr.size() == l) {
//             res.insert(curr);
//             return;
//         }       

//         for (auto child:graph[curr[curr.size() - 1]]) {
//             if (vis.count(child) && vis[child]) continue;
//             vis[child] = 1;
//             curr.push_back(child);
//             backtrack(src, dest, curr, graph, res, vis, l);
//             vis[child] = 0;
//             curr.pop_back();
//         }
//     }

//     vector<vector<string>> findLadders(string src, string dest, vector<string>& v) {
//         map<string, vector<string>> graph;
//         set<string> st(v.begin(), v.end());

//         v.push_back(src);
//         int n = v.size();
//         int m;
//         string s;
//         for (int i=0 ; i<n ; i++) {
//             m = v[i].size();
//             for (int j=0 ; j<m ; j++) {
//                 for (int x=0 ; x<26 ; x++) {        
//                     if (x == v[i][j]-'a') continue;
//                     s = v[i];
//                     s[j] = x+'a';
//                     if (st.find(s) != st.end()) {
//                         graph[v[i]].push_back(s);
//                     }
//                 }
//             }
//         }
//         map<string, bool> vis;
//         vector<string> curr = {src};
//         set<vector<string>> res;
//         int l = 1e9;
//         length(src, dest, src, graph, 1, l, vis);
//         if (l == 1e9)
//             return {};

//         backtrack(src, dest, curr, graph, res, vis, l);
//         if (res.empty()) return {};
//         return vector<vector<string>>(res.begin(), res.end());
//     }
// };

class Solution {
public:    
    map<string, vector<string> > graph;
    map<string,bool> visited;
    map<string,int> dist;
    vector<string> path;
    map<string,vector<string>> parents;
    const int INF = 0x3f3f3f3f;
    set<vector<string>> ans;
    vector<vector<string>> res;
    
    void findPaths(string word)
    {
        if (word == "")
        {
            ans.insert(path);
            return;
        }

        for (string w: parents[word])
        {
            path.push_back(word);
            findPaths(w);
            path.pop_back();
        }
    }

    void shortestPath(string start){
        queue<string> q;
        q.push(start);
        visited[start]=true;
        dist[start]=0;
        parents[start]= { "" };
        while(!q.empty())
        {
            string parent = q.front();
            q.pop();
            for(string child: graph[parent])
            {
                if (dist[child]>dist[parent]+1)
                {
                    dist[child] = dist[parent]+1;
                    parents[child].clear();
                    q.push(child);
                    parents[child].push_back(parent);
                }
                else if (dist[child]==dist[parent]+1)
                {
                    // another parent found
                    parents[child].push_back(parent);
                }


                if (!visited[child])
                {
                    visited[child]=true;
                    
                }
            }
        }
        return;
    }

    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& s) {
        s.insert(s.begin(), beginWord);
        int n=s.size();
        int si=beginWord.size();
        int diff;
        bool trouve = false;
        for (int i=0 ; i<n ; i++)
        {
            visited[s[i]]=false;
            dist[s[i]]=INF;
            graph[s[i]].clear();
            if (s[i]==endWord)
                trouve = true;
        }

        if (!trouve)
            return res;

        for (int i=0 ; i<n-1 ; i++)
        {
            for (int j=i+1 ; j<n ; j++)
            {
                diff = 0;
                for (int x=0 ; x<si ; x++)
                {
                    if (s[i][x] != s[j][x])
                        diff++;

                    if (diff>1)
                        break;
                }

                if (diff<2)
                {
                    graph[s[i]].push_back(s[j]);
                    graph[s[j]].push_back(s[i]);
                }
            }
        }

        shortestPath(beginWord);
        findPaths(endWord);
        
        for (auto p:ans)
        {
            vector<string> v;
            reverse(p.begin(),p.end());
            for (auto a:p)
                v.push_back(a);
            
            res.push_back(v);
        }

        return res;
    }
};


int main() {
    string beginWord="hit",endWord="cog";
    vector<string> wordList = {"hot","dot","dog","lot","log","cog"};
    Solution solution;
    vector<vector<string>> ans = solution.findLadders(beginWord,endWord,wordList);
    for (auto i:ans) {
        for(auto j:i) {
            cout << j << " ";
        }
        cout << endl;
    }
}