#include <iostream>
#include <string>
using namespace std;
int countSubstring=0;
void generateSubstring(const std::string& s) {
    int n = s.length();
    for(int start=0;start<n;++start) {
        for (int end = 1;end<=n-start;++end) {
            cout << s.substr(start,end) << endl;
            countSubstring++;
        }
    }
}
int main() {
    cout << "Enter a String :";
    string s;
    cin >> s;
    generateSubstring(s);
    cout << countSubstring;
    return 0;
}