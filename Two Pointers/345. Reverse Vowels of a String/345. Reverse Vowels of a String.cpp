#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool vowels(char c) {
        if (!isalpha(c))
            return 0;
        else {
            c=tolower(c);
            return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
        }
    }
    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        while(i<j) {
            bool v1=vowels(s[i]);
            bool v2=vowels(s[j]);
            if (v1&&v2) {
                swap(s[i],s[j]);
                i++;j--;
            }
            else if (v1&&!v2) 
                j--;
            else if (!v1&&v2) 
                i++;
            else {
                i++;j--; // TWOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO LINES
            }
        }
        return s;
    }
};

int main() {
    Solution solution;
    string s="leetcode";
    cout<<solution.reverseVowels(s);
    return 0;
}