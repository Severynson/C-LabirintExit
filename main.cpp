#include <iostream>
#include "include/Map.h"

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

    myMap.display();

    return 0;
}