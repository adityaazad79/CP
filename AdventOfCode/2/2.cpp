#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

int main()
{
    std::ifstream inputFile("/Users/aditya/Documents/CP/AdventOfCode/2/input.txt");
    std::vector<std::vector<int>> nestedVector;

    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::vector<int> row;
        std::istringstream iss(line);
        int number;
        while (iss >> number)
        {
            row.push_back(number);
        }
        nestedVector.push_back(row);
    }

    inputFile.close();

    int safeCount = 0;
    for (const auto &report : nestedVector)
    {
        if (report.size() < 2)
        {
            safeCount++; // Consider reports with less than 2 levels as safe
            continue;
        }

        bool isIncreasing = report[1] > report[0];
        bool isSafe = true;

        for (size_t i = 1; i < report.size(); i++)
        {
            bool flag = 1;
            int diff = report[i] - report[i - 1];
            if (((isIncreasing && diff <= 0) || (!isIncreasing && diff >= 0) || std::abs(diff) < 1 || std::abs(diff) > 3) && flag == 1)
            {
                // flag=0;
                if (flag == 1)
                {
                    flag = 0;
                    continue;
                }
                isSafe = false;
                break;
            }
        }

        if (isSafe)
        {
            safeCount++;
        }
    }

    std::cout << safeCount << std::endl;

    return 0;
}