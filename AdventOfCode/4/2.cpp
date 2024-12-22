#include <iostream>
#include <fstream>
#include <vector>
#include <string>

bool checkXMAS(const std::vector<std::string>& grid, int row, int col) {
    if (row < 1 || row >= grid.size() - 1 || col < 1 || col >= grid[row].size() - 1) {
        return false;
    }

    char center = grid[row][col];
    if (center != 'A') return false;

    char topLeft = grid[row-1][col-1];
    char topRight = grid[row-1][col+1];
    char bottomLeft = grid[row+1][col-1];
    char bottomRight = grid[row+1][col+1];

    return ((topLeft == 'M' && bottomRight == 'S') || (topLeft == 'S' && bottomRight == 'M')) &&
           ((topRight == 'M' && bottomLeft == 'S') || (topRight == 'S' && bottomLeft == 'M'));
}

int countXMAS(const std::vector<std::string>& grid) {
    int count = 0;
    for (int i = 1; i < grid.size() - 1; ++i) {
        for (int j = 1; j < grid[i].size() - 1; ++j) {
            if (checkXMAS(grid, i, j)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::ifstream file("/Users/aditya/Documents/CP/AdventOfCode/4/input.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::vector<std::string> grid;
    std::string line;
    while (std::getline(file, line)) {
        grid.push_back(line);
    }

    int result = countXMAS(grid);
    std::cout << "X-MAS appears " << result << " times in the word search." << std::endl;

    return 0;
}