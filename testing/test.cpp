#include <iostream>
#include <map>
#include <vector>
#include <utility> // For std::pair

int main() {
    // Define the map: key is an int, value is a vector of pairs of ints
    std::map<int, std::vector<std::pair<int, int>>> myMap;

    // Insert an empty vector for a key if it doesn't exist
    int key = 1;
    if (myMap.find(key) == myMap.end()) {
        myMap[key] = std::vector<std::pair<int, int>>();
    }

    // Add a new pair to the vector associated with the key
    std::pair<int, int> newPair = std::make_pair(10, 20);
    myMap[key].push_back(newPair);

    // Display the contents of the map
    for (const auto& entry : myMap) {
        std::cout << "Key: " << entry.first << "\n";
        for (const auto& pair : entry.second) {
            std::cout << "  Pair: (" << pair.first << ", " << pair.second << ")\n";
        }
    }

    return 0;
}
