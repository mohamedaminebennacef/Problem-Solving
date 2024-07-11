#include <iostream>
#include <string>

int main() {
    std::string str = "ABBABA";
    std::string to_remove = "AB";
    
    // Find the starting position of the substring to remove
    size_t pos = str.find(to_remove);
    
    // If the substring is found, remove it
    if (pos != std::string::npos) {
        str.erase(pos, to_remove.length());
    }

    std::cout << "Resulting string: " << str << std::endl;

    return 0;
}
