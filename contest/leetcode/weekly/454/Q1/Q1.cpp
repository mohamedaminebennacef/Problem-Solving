#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())

string generateTag(string s)
{
    vector<string> v;
    string word = "#";
    word += tolower(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        char c = tolower(s[i]);
        if (c != ' ')
            word += c;

        else
        {
            word[0] = toupper(word[0]);
            v.pb(word);
            word = "";
        }
    }
    string ans = "";
    for (string word : v)
        ans += word;
    word[0] = toupper(word[0]);
    return ans + word;
}
int main() {
    cout<<generateTag("Leetcode daily streak achieved")<<endl;
    return 0;
}