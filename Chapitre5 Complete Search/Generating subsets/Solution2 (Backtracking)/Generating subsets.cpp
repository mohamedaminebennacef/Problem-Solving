#include <bits/stdc++.h>
using namespace std;

// Function to recursively find subsets
void rec(vector<int>& arr, int i, vector<int>& subset, vector<vector<int>>& subsets) {
    if (i == arr.size()) {
        subsets.push_back(subset);
    } else {
        subset.push_back(arr[i]);
        rec(arr, i + 1, subset, subsets);
        subset.pop_back();
        rec(arr, i + 1, subset, subsets);
    }
}

// Function to get all subsets of an array
vector<vector<int>> get_subsets(vector<int>& arr) {
    vector<vector<int>> subsets;
    vector<int> subset;
    rec(arr, 0, subset, subsets);
    return subsets;
}

int main() {
    vector<int> arr = {1, 2, 3,4}; // Example input
    vector<vector<int>> subsets = get_subsets(arr);

    // Print all subsets
    for (const auto& subset : subsets) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
