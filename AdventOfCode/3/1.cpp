#include <iostream>
#include <fstream>
#include <string>
#include <regex>

int main() {
    std::ifstream inputFile("/Users/aditya/Documents/CP/AdventOfCode/3/input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string corrupted_memory((std::istreambuf_iterator<char>(inputFile)),
                                  std::istreambuf_iterator<char>());
    inputFile.close();

    std::regex pattern(R"(mul\((\d{1,3}),(\d{1,3})\))");
    std::sregex_iterator it(corrupted_memory.begin(), corrupted_memory.end(), pattern);
    std::sregex_iterator end;

    long long sum = 0;

    while (it != end) {
        int x = std::stoi((*it)[1]);
        int y = std::stoi((*it)[2]);
        sum += static_cast<long long>(x) * y;
        ++it;
    }

    std::cout << "Sum of all multiplication results: " << sum << std::endl;

    return 0;
}

// Sum of all multiplication results: 27623467
