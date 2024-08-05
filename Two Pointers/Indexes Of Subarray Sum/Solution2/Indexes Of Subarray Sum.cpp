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
        vector<int> indices(1,-1);
        if (!s) {
            if (find(arr.begin(),arr.end(),0) != arr.end()){
                indices[0] = find(arr.begin(),arr.end(),0)-arr.begin()+1;
                indices.push_back(find(arr.begin(),arr.end(),0)-arr.begin()+1);
                return indices;
            }
            else
                return indices;
        }
        int start=0,end=1;
        long long sm=arr[start];
        if (sm == s) {
            indices[0]=1;
            indices.push_back(1);
            return indices;
        }
        while(end<n) {
            if (sm+arr[end]>s) {
                sm-=arr[start];
                start++;
            }
            else {
                sm+=arr[end];
                end++;
            }
            if (sm==s) {
                indices[0]=start+1;
                indices.push_back(end);
                return indices;
            }
        }
        return indices;
    }
};


//{ Driver Code Starts.

int main() {
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