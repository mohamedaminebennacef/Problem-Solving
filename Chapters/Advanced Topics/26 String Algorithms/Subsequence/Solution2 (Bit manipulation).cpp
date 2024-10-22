#include <iostream>
#include <string>
using namespace std;

void subsequence(const string& s) {
    int n = s.length();
    int totalSubsequences = 1 << n; // 2^n total subsequences
    // Loop over each possible subsequence
    for (int i = 0; i < totalSubsequences; i++) {
        string current = "";
        // Check each bit of i
        for (int j = 0; j < n; j++) {
            // If the j-th bit of i is set, include s[j]
            if (i & (1 << j)) {
                current += s[j];
            }
        }
        cout << current << endl; // Print the current subsequence
    }
}

int main() {
    string s = "abc";
    subsequence(s);
    return 0;
}
