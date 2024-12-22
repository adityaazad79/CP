#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    // Open the input files
    ifstream leftFile("/Users/aditya/Documents/CP/AdventOfCode/1/output_1.txt");
    ifstream rightFile("/Users/aditya/Documents/CP/AdventOfCode/1/output_2.txt");

    // Check if files are open successfully
    if (!leftFile.is_open() || !rightFile.is_open()) {
        cerr << "Error opening file(s)." << endl;
        return 1;
    }

    // Read the left list into a vector
    vector<int> leftList;
    int number;
    while (leftFile >> number) {
        leftList.push_back(number);
    }

    // Read the right list into a vector
    vector<int> rightList;
    while (rightFile >> number) {
        rightList.push_back(number);
    }

    // Create a frequency map for numbers in the right list
    unordered_map<int, int> rightFrequency;
    for (int num : rightList) {
        rightFrequency[num]++;
    }

    // Calculate the similarity score
    int similarityScore = 0;
    for (int num : leftList) {
        similarityScore += num * rightFrequency[num];
    }

    // Output the result
    cout << "Total Similarity Score: " << similarityScore << endl;

    // Close the files
    leftFile.close();
    rightFile.close();

    return 0;
}
