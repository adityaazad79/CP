#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to read numbers from a file into a vector
void readFile(const string &filename, vector<double> &numbers)
{
    ifstream file(filename);
    double num;
    while (file >> num)
    {
        numbers.push_back(num);
    }
    file.close();
}

// Function to calculate the relative difference between two numbers
double relativeDifference(double a, double b)
{
    return abs(a - b) / max(abs(a), abs(b));
}

int main()
{
    // Define file names
    string file1 = "/Users/aditya/Documents/CP/AdventOfCode/1/output_1.txt";
    string file2 = "/Users/aditya/Documents/CP/AdventOfCode/1/output_2.txt";

    // Vectors to store numbers from the files
    vector<double> numbers1, numbers2;

    // Read numbers from both files
    readFile(file1, numbers1);
    readFile(file2, numbers2);

    // Check if both files contain the same number of elements
    if (numbers1.size() != numbers2.size())
    {
        cerr << "Error: The files do not have the same number of elements!" << endl;
        return 1;
    }

    // Sort both vectors
    sort(numbers1.begin(), numbers1.end());
    sort(numbers2.begin(), numbers2.end());

    // Variable to store the sum of relative differences
    int totalRelativeDifference = 0;

    // Calculate the relative differences and sum them up
    for (size_t i = 0; i < numbers1.size(); ++i)
    {
        totalRelativeDifference += abs(numbers1[i] - numbers2[i]);
    }

    // Output the sum of relative differences
    cout << "Total Sum of Relative Differences: " << totalRelativeDifference << endl;

    return 0;
}
