#include <iostream>
#include <vector>

// Global variables
std::vector<int> subset; // To store the current subset
int n;                   // Size of the set

// Function to process the subset (in this case, print it)
void processSubset() {
    std::cout << "{ ";
    for (int x : subset) {
        std::cout << x << " ";
    }
    std::cout << "}" ;
}

// The search function as given
void search(int k) {
    if (k == n) {
        processSubset(); // Process the subset when k == n
    } else {
        search(k + 1);      // Exclude k
        subset.push_back(k); // Include k
        search(k + 1);      // Move to the next element
        subset.pop_back();  // Backtrack
    }
}

int main() {
    // Initialize the size of the set
    n = 3; // Example: a set with 3 elements {0, 1, 2}
    
    // Start the search from the first element
    search(0);

    return 0;
}
