#include <iostream>
#include "include/Map.h"
#include "include/Node.h"

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
void wayOutSeeker(Map<ARRAY_LENGTH, ARRAY_WIDTH> &map);

const int ARRAY_LENGTH = 10;
const int ARRAY_WIDTH = ARRAY_LENGTH;

int a[ARRAY_LENGTH][ARRAY_WIDTH] = {
    /**/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    /**/ {0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
    /**/ {0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
    /**/ {0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
    /**/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    /**/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    /**/ {0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
    /**/ {0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
    /**/ {0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
    /**/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
};

int main()
{
    Map<ARRAY_LENGTH, ARRAY_WIDTH> myMap(a);

    wayOutSeeker(myMap);

    return 0;
}

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
void wayOutSeeker(Map<ARRAY_LENGTH, ARRAY_WIDTH> &map)
{
    map.display();
}