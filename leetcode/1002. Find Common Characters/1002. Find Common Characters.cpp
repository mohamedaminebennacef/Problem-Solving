#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<int> minFreq(26, INT_MAX);
    
    for (auto& word : words) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            minFreq[i] = min(minFreq[i], freq[i]);
        }
    }

    vector<string> output;
    for (int i = 0; i < 26; i++) {
        while (minFreq[i] > 0) {
            output.push_back(string(1, i + 'a'));
            minFreq[i]--;
        }
    }

    return output;
}

int main() {
    vector<string> words = {"bella", "label", "roller"};
    vector<string> output = commonChars(words);

    cout << "[";
    for (size_t i = 0; i < output.size(); i++) {
        cout << output[i];
        if (i < output.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";

    return 0;
}
