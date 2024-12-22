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

    // for (const auto& row : nestedVector) {
    //     for (int num : row) {
    //         std::cout << num << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // int ct = 0;
    // for (int i = 0; i < nestedVector.size(); i++)
    // {
    //     if (nestedVector[i][0] > nestedVector[i][1])
    //     {
    //         for (int j = 1; j < nestedVector[i].size(); j++)
    //         {
    //             if (((nestedVector[i][j - 1] - nestedVector[i][j]) > 3) || ((nestedVector[i][j - 1] - nestedVector[i][j]) < 1))
    //             {
    //                 std::cout<<"1"<<std::endl;
    //                 if (j == nestedVector[i].size() - 1)
    //                     ct++;
    //             }
    //             else
    //                 break;
    //         }
    //     }
    //     else if (nestedVector[i][0] < nestedVector[i][1])
    //     {
    //         for (int j = 1; j < nestedVector[i].size(); j++)
    //         {
    //             if (((nestedVector[i][j] - nestedVector[i][j - 1]) > 3) || ((nestedVector[i][j] - nestedVector[i][j - 1]) < 1))
    //             {
    //                 std::cout<<"2"<<std::endl;
    //                 if (j == nestedVector[i].size() - 1)
    //                     ct++;
    //             }
    //             else
    //                 break;
    //         }
    //     }
    // }

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
            int diff = report[i] - report[i - 1];
            if ((isIncreasing && diff <= 0) || (!isIncreasing && diff >= 0) || std::abs(diff) < 1 || std::abs(diff) > 3)
            {
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