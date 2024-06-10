#include <bits/stdc++.h>
using namespace std;
const int n = 9;
class Solution {
    public:
        // bech na3rf ena fi ena carreaux bch na3rf mnin nparouri
        pair<int,int> get_range(int x)
        {
            if (x<3)
                return {0,3};
            else if (x<6)
                return {3,6};
            else
                return {6,9};
        }
        // condition d'arret
        bool is_valid(vector<vector<char>>& state) {
            return state.size() == n && state[n-1].size() == n;
        }
        // getting possible values
        void get(vector<vector<char>>& state,set<char> &possible,vector<vector<char>>& board) {
            possible.clear(); // possible nta3 lcas li kont fih 9bal
        }
        // function backtracking
        void search(vector<vector<char>>& state,vector<vector<char>>& board,vector<vector<char>>&ans) {
            if (is_valid(state)) {
                ans = state;
                return;
            }
            set<char> possible;
            possible = get()
        }
};
