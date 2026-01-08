#include <iostream>
#include <string>

bool isComment(const std::string& line) {
    // Check for single-line comment (//)
    if (line.find("//") == 0) {
        return true; // It's a single-line comment
    }

    // Check for multi-line comment (/* */)
    if (line.find("/*") == 0 && line.find("*/") != std::string::npos) {
        return true; // It's a multi-line comment
    }

    return false; // It's not a comment
}

int main() {
    std::string line;

    // Prompt the user to enter a line of code
    std::cout << "Enter a line of code: ";
    std::getline(std::cin, line);

    // Check if the line is a comment or not
    if (isComment(line)) {
        std::cout << "This is a comment." << std::endl;
    } else {
        std::cout << "This is not a comment." << std::endl;
    }

    return 0;
}
