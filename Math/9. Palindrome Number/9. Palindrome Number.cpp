#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        long long reversed=0;
        int temp=x;
        while(x!=0){
            int digit=x%10;
            reversed=reversed*10+digit; // Beware of overflow when you reverse the integer.
            x/=10;
        }
        return reversed==temp;
    }
};
int main() {
    Solution solution;
    cout<<solution.isPalindrome(2024202);
    return 0;
}