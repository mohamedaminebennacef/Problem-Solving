#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    // Extract a substring starting from position 7 with length 5
    std::string sub = str.substr(0, str.find(" "));
    std::string sub2 = str.substr(str.find(" ")+1, str.size());

    std::cout << "Original string: " << str << std::endl;
    std::cout << "Substring: " << sub << std::endl;
    std::cout << "Substring: " << sub2 << std::endl;

    return 0;
}
