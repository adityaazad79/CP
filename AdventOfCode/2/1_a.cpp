#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>

bool isSafe(const std::vector<int> &levels)
{
    if (levels.size() < 2)
        return true;

    bool increasing = levels[1] > levels[0];

    for (size_t i = 1; i < levels.size(); ++i)
    {
        int diff = levels[i] - levels[i - 1];
        if (increasing && diff <= 0)
            return false;
        if (!increasing && diff >= 0)
            return false;
        if (std::abs(diff) < 1 || std::abs(diff) > 3)
            return false;
    }

    return true;
}

int main()
{
    std::ifstream inputFile("/Users/aditya/Documents/CP/AdventOfCode/2/input.txt");
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string line;
    int safeReports = 0;

    while (std::getline(inputFile, line))
    {
        std::vector<int> levels;
        std::istringstream iss(line);
        int level;
        while (iss >> level)
        {
            levels.push_back(level);
        }

        if (isSafe(levels))
        {
            safeReports++;
        }
    }

    inputFile.close();

    std::cout << "Number of safe reports: " << safeReports << std::endl;

    return 0;
}