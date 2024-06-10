#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // pair<int,int> get_range(int x) {
    //     if (x<3) return {0,3};
    //     else if (x<6) return {3,6};
    //     else return {6,9};
    // }
    // bool isValidSudoku(vector<vector<char>>& board) {
    //     map<int,vector<pair<int,int>>> indices;
    //     for(int i=0;i<9;i++) {
    //         for(int j=0;j<9;j++) {
    //             if (board[i][j] != '.') {
    //                 indices[board[i][j]-48].push_back(make_pair(i,j));   
    //             }
    //         }
    //     }
    //     for(map<int,vector<pair<int,int>>>::iterator it = indices.begin();it!=indices.end();++it ) {
    //         vector<pair<int,int>> vec = it->second;
    //         for(vector<pair<int,int>>::iterator itvec = vec.begin();itvec!=vec.end();++itvec) {
    //             for(int i=0;i<it->second.size()-1;i++) {
    //                 for(int j=i+1;j<it->second.size();j++) {
    //                     if (vec[i].first == vec[j].first)
    //                         return false;
    //                 }
    //             }
    //         }
    //     }
    //     for(map<int,vector<pair<int,int>>>::iterator it = indices.begin();it!=indices.end();++it ) {
    //         vector<pair<int,int>> vec = it->second;
    //         for(vector<pair<int,int>>::iterator itvec = vec.begin();itvec!=vec.end();++itvec) {
    //             for(int i=0;i<it->second.size()-1;i++) {
    //                 for(int j=i+1;j<it->second.size();j++) {
    //                     if (vec[i].second == vec[j].second)
    //                         return false;
    //                 }
    //             }
    //         }
    //     }
    //     return true;
    // }
    bool isValidSudoku(vector<vector<char>>& board) {
        // 1. Check row quality
        for (int row = 0; row < 9; row++){
            unordered_set<char> check_row;
            for (int col = 0; col < 9; col++){
                if (board[row][col] != '.' && check_row.find(board[row][col]) != check_row.end()){
                    return false;
                }
                check_row.insert(board[row][col]);
            }
        }

        // 2. Check column quality
        for (int col = 0; col < 9; col++){
            unordered_set<char> check_col;
            for (int row = 0; row < 9; row++){
                if (board[row][col] != '.' && check_col.find(board[row][col]) != check_col.end()){
                    return false;
                }
                check_col.insert(board[row][col]);
            }
        }
        vector<unordered_set<char>> check_subbox(9);
        for (int row = 0; row < 9; row++){
            for (int col = 0; col < 9; col++){
                int loc = (row / 3) * 3 + col / 3;
                if (board[row][col] != '.' && check_subbox[loc].find(board[row][col]) != check_subbox[loc].end()){
                    return false;
                }
                check_subbox[loc].insert(board[row][col]);
            }
        }
        return true;
    }   

};

int main() {
    Solution solution;
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    cout << solution.isValidSudoku(board);
}