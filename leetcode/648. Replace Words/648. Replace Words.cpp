#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> st;
        string word="",ans="";
        sentence += ' ';

        for(auto i: dictionary) 
            st.insert(i);

        for(auto i: sentence){
            if(i==' '){
                if(ans.size()>0) ans += ' ';

                string temp = "";
                for(auto j: word){
                    temp += j;
                    if(st.count(temp)) {
                        break;
                    }
                }
                ans += temp;
                word = "";
            } else word += i;
        }

        return ans;
    }
};


int main() {
    Solution solution;
    vector<string> dictionary = {"cat","bat","rat"};
    string sentence = "the cattle was rattled by the battery";
    cout << solution.replaceWords(dictionary,sentence);


    return 0;
}