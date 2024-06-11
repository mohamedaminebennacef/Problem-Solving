#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int frequency(int value,vector<int> arr1) {
            int freq=0;
            for (int v:arr1) {
                if (v == value) {
                    freq++;
                }
            }
            return freq;
        }
        vector<int>relativeSortArray(vector<int>& arr1,vector<int>& arr2) {
            vector<int> arr3;
            vector<int> freq;
            for (int i=0;i<arr2.size();i++) {
                for(int j=0;j<frequency(arr2[i],arr1);j++) {
                    arr3.push_back(arr2[i]);
                }
            }
            int startIndex = arr3.size();
            for (int i=0;i<arr1.size();i++) {
                if (frequency(arr1[i],arr3) == 0)
                    arr3.push_back(arr1[i]);
            }
            sort(arr3.begin() + startIndex, arr3.end());
            return arr3;
        }
};

int main() {
    Solution solution;
    vector<int> arr1 = {28,6,22,8,44,17}, arr2 = {22,28,8,6};
    vector<int> arr3 = solution.relativeSortArray(arr1,arr2);
    for(auto v:arr3)
        cout << v << " ";
}