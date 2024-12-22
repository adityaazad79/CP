#include <iostream>
#include <fstream>
#include <vector>
#include <string>

const std::string TARGET = "XMAS";

int countXMAS(const std::vector<std::string>& grid) {
    int count = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    auto check = [&](int r, int c, int dr, int dc) {
        if (r + 3*dr < 0 || r + 3*dr >= rows || c + 3*dc < 0 || c + 3*dc >= cols)
            return false;
        for (int i = 0; i < 4; i++)
            if (grid[r + i*dr][c + i*dc] != TARGET[i])
                return false;
        return true;
    };

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            for (int dr = -1; dr <= 1; dr++) {
                for (int dc = -1; dc <= 1; dc++) {
                    if (dr == 0 && dc == 0) continue;
                    if (check(r, c, dr, dc))
                        count++;
                }
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
    std::cout << "XMAS appears " << result << " times in the word search." << std::endl;

    return 0;
}
