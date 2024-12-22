#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>

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

bool isDampenerSafe(const std::vector<int> &levels)
{
    if (levels.size() < 3)
        return true;

    for (size_t i = 0; i < levels.size(); ++i)
    {
        std::vector<int> modified = levels;
        modified.erase(modified.begin() + i);
        if (isSafe(modified))
            return true;
    }

    return false;
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

        if (isSafe(levels) || isDampenerSafe(levels))
        {
            safeReports++;
        }
    }

    inputFile.close();

    std::cout << "Number of safe reports: " << safeReports << std::endl;

    return 0;
}