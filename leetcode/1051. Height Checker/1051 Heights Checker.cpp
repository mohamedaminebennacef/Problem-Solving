class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        int nb = 0;
        std::vector<int> expected = heights; // Copy heights to expected
        std::sort(expected.begin(), expected.end()); // Sort the expected vector

        // Compare the original heights with the sorted expected vector
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                nb++;
            }
        }

        return nb;
    }
};