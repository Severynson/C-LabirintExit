#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <thread>
#include <array>

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
class Map {
private:
    std::array<int, ARRAY_WIDTH * ARRAY_LENGTH> map;
    int exitIndex = 0;
    int entranceIndex = 0;


public:
    std::array<std::array<int, ARRAY_WIDTH>, ARRAY_LENGTH> mapArray2D;

    Map(const int (&a)[ARRAY_LENGTH][ARRAY_WIDTH]);

    void display();

    void findEntrancePoint();
};

#include "../src/Map.cpp" // Include the implementation file

#endif /* MAP_H */