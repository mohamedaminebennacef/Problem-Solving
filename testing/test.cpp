#include <iostream>
#include <map>

int mostFrequentElement(const std::map<int, int>& freqMap) {
    int maxCount = 0;
    int mostFrequent = freqMap.begin()->first; // Initialize with the first element

    // Iterate through the map to find the element with the maximum frequency
    for (const auto& pair : freqMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequent = pair.first;
        }
    }

    return mostFrequent;
}

int main() {
    // Example map where keys are elements and values are their frequencies
    std::map<int, int> freqMap = {
        {1, 3},
        {2, 4},
        {3, 1},
        {4, 2}
    };

    int result = mostFrequentElement(freqMap);
    std::cout << "The most frequent element is: " << result << std::endl;
    return 0;
}
