#include <iostream>
#include <vector>

// Global variables
std::vector<int> permutation; // To store the current permutation
std::vector<bool> chosen;     // To track if an element is already chosen
int n;                        // Size of the set
// Function to process the permutation (in this case, print it)
void processPermutation() {
    std::cout << "{";
    for (int x : permutation) {
        std::cout << x << " ";
    }
    std::cout << "}" << std::endl;
}
// The search function as given
void search() {
    if (permutation.size() == n) {
        processPermutation(); // Process the permutation when its size is n
    } else {
        for (int i = 0; i < n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}
int main() {
    // Initialize the size of the set
    n = 4; // Example: a set with 3 elements {0, 1, 2}
    // Initialize the chosen vector with false values
    chosen.assign(n, false);
    // Start the search
    search();
    return 0;
}
