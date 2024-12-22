#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

// Function to read the input from a file
string readInput(const string& filePath) {
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filePath << endl;
        exit(1);
    }

    string content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
    file.close();
    return content;
}

// Function to process instructions and calculate the sum
int processInstructions(const string& data) {
    // Regular expressions for instructions
    regex mulPattern(R"(mul\((\d+),(\d+)\))");
    regex doPattern(R"(do\(\))");
    regex dontPattern(R"(don't\(\))");

    // State and result initialization
    bool isEnabled = true;
    int totalSum = 0;

    // Combined regex for all patterns
    regex combinedPattern(R"(mul\(\d+,\d+\)|do\(\)|don't\(\))");
    auto wordsBegin = sregex_iterator(data.begin(), data.end(), combinedPattern);
    auto wordsEnd = sregex_iterator();

    for (auto it = wordsBegin; it != wordsEnd; ++it) {
        string instruction = it->str();

        if (regex_match(instruction, doPattern)) {
            isEnabled = true;
        } else if (regex_match(instruction, dontPattern)) {
            isEnabled = false;
        } else if (regex_match(instruction, mulPattern)) {
            if (isEnabled) {
                smatch matches;
                regex_search(instruction, matches, mulPattern);

                int x = stoi(matches[1].str());
                int y = stoi(matches[2].str());

                totalSum += x * y;
            }
        }
    }

    return totalSum;
}

int main() {
    // Path to the input file
    string filePath = "input.txt";

    // Read and process the input
    string data = readInput(filePath);
    int result = processInstructions(data);

    // Output the result
    cout << "Sum of enabled multiplications: " << result << endl;

    return 0;
}
