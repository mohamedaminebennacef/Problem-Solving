/*
-is the array sorted ?
UNSORTED
-does the array contain the target sum ?
YES
-does it contain negative integers ?
NO non negative (includes zero)
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        vector<int> indices;
        int start=0,end=0;
        long long ans=arr[start];
        while(end<n) {
            if (ans<s) {
                end++;
                ans+=arr[end];
            }
            else if (ans==s) {
                indices.push_back(start+1);
                indices.push_back(end+1);
                return indices;
            }
            else {
                start++;
                end=start;
                ans=arr[start];
            }
        }
        indices.push_back(-1);
        return indices;
    }
};

//{ Driver Code Starts.

int main() {
    freopen("../input.txt","r",stdin);
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends