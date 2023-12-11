#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <thread>
#include <array>

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
class Map {
private:
    std::array<int, ARRAY_WIDTH * ARRAY_LENGTH> map;
    /* */
    // "map" is the activated array of integer instead of booleans to display:
    // 0) Wall ---------------------------------- white;
    // 1) Way to explore ------------------ transparent;
    // 2) Fence of the map ------------ elephant's bone;
    // 3) Entrance -----------------------------------??;
    // 4) Exit ---------------------------------------??;
    // 5) Node seeking branch ------------------ yellow;
    // 6) Node dead way branch -------------------- red;
    // 7) Node with founded exit branch --------- green;
    /* */
    int exitCellIndex = 0;
    int entranceCellIndex = 0;


public:
    std::array<std::array<int, ARRAY_WIDTH>, ARRAY_LENGTH> mapArray2D;

    Map(const int (&a)[ARRAY_LENGTH][ARRAY_WIDTH]);

    void display();

    void findEntrancePoints();

    void findExitWay();

    void mapNodeStepMaker();
};

#include "../src/Map.cpp" // Include the implementation file

#endif /* MAP_H */