#include <bits/stdc++.h>
using namespace std;

vector<string> output;
vector<string> commonChars(vector<string>& words) {
    for (int i=0;i<words.size();i++) { // iterating over words
        bool common_ch = true;
        for(int j=i+1;j<words[i].size();j++) { // iterating over characters
            common_ch = common_ch and words[j].find(words[i][i]) != npos;
        }
        if (common_ch) {
            output.push_back(words[i][i]);
        }
    }
    return output;
}

int main() {
    vector<string> words = {"bella","label","roller"};
    output = commonChars(words);

    cout << "[";
    for (auto character:output) {
        cout << character << " ";
    }
    cout << "]";


    return 0;
}