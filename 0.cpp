#include <bits/stdc++.h>
// #include <fstream>

template<typename T, int height, int width>
std::ostream& writemap(std::ostream& os, T (&map)[height][width])
{
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            os << map[i][j]<<" ";
        }
        os<<"\n";
    }
    return os;
}

int main()
{
    const int width = 4;
    const int height = 5;

    int map[height][width] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };

    std::fstream of("Map.txt", std::ios::out | std::ios::app);

    if (of.is_open())
    {
        writemap(of, map);
        writemap(std::cout, map);
        of.close();
    }
}