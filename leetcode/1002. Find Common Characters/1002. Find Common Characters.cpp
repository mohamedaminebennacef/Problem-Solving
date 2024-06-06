#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    // Step 1: Initialize the minimum frequency array
    vector<int> minFreq(26, INT_MAX); // There are 26 letters in the alphabet
    
    // Step 2: Calculate frequencies for each word
    for (const auto& word : words) {
        vector<int> freq(26, 0); // Frequency array for the current word
        for (char c : word) {
            freq[c - 'a']++; // Count frequency of each character
        }
        // Update the global minimum frequency array
        for (int i = 0; i < 26; i++) {
            minFreq[i] = min(minFreq[i], freq[i]);
        }
    }
    
    // Step 3: Collect common characters
    vector<string> output;
    for (int i = 0; i < 26; i++) {
        while (minFreq[i] > 0) {
            output.push_back(string(1, i + 'a')); // Convert character index to char
            minFreq[i]--;
        }
    }
    
    return output;
}

vector<string> commonCharsv2(vector<string>& words) {
    unordered_map<char, int> minFreq;

    // Initialize minFreq with the frequency of the first word
    for (char c : words[0]) {
        minFreq[c]++;
    }

    // Update minFreq based on subsequent words
    for (int i = 1; i < words.size(); i++) {
        unordered_map<char, int> freq;
        for (char c : words[i]) {
            freq[c]++;
        }
        
        // Update the minFreq map to keep the minimum frequency
        for (auto& pair : minFreq) {
            pair.second = min(pair.second, freq[pair.first]);
        }
        
        // Remove characters not found in the current word
        for (auto it = minFreq.begin(); it != minFreq.end(); ) {
            if (freq[it->first] == 0) {
                it = minFreq.erase(it);
            } else {
                ++it;
            }
        }
    }

    // Collect common characters
    vector<string> output;
    for (auto& pair : minFreq) {
        for (int i = 0; i < pair.second; i++) {
            output.push_back(string(1, pair.first));
        }
    }

    return output;
}

int main() {
    vector<string> words = {"bella", "label", "roller"};
    vector<string> output = commonCharsv2(words);

    // Print the output
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
