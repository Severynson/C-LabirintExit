// #include <iostream>
// #include <vector>
// using namespace std;

// template <int ARRAY_LENGTH, int ARRAY_WIDTH>
// class Map
// {
// private:
//     array<bool, ARRAY_WIDTH * ARRAY_LENGTH> map;

// public:
//     array<array<bool, ARRAY_WIDTH>, ARRAY_LENGTH> mapArray2D;

//     Map(const bool (&a)[ARRAY_LENGTH][ARRAY_WIDTH])
//     {
//         for (int i = 0; i < ARRAY_LENGTH; ++i)
//         {
//             for (int j = 0; j < ARRAY_WIDTH; ++j)
//             {
//                 mapArray2D[i][j] = a[i][j];
//                 map[i * ARRAY_WIDTH + j] = a[i][j];
//             }
//         }
//     }

//     void display()
//     {
//         for (int i = 0; i < ARRAY_LENGTH; ++i)
//         {
//             for (int j = 0; j < ARRAY_WIDTH; ++j)
//             {
//                 std::cout << mapArray2D[i][j] << " ";
//             }
//             std::cout << std::endl;
//         }
//     }
// };

// const int ARRAY_LENGTH = 10;
// const int ARRAY_WIDTH = ARRAY_LENGTH;

// bool a[ARRAY_LENGTH][ARRAY_WIDTH] = {
//     /**/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//     /**/ {0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
//     /**/ {0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
//     /**/ {0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
//     /**/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//     /**/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//     /**/ {0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
//     /**/ {0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
//     /**/ {0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
//     /**/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
// };

// int main()
// {

//     Map<ARRAY_LENGTH, ARRAY_WIDTH> myMap(a);

//     myMap.display();

//     return 0;
// }

#include <iostream>
#include <array>

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
class Map
{
private:
    std::array<bool, ARRAY_WIDTH * ARRAY_LENGTH> map;

public:
    std::array<std::array<bool, ARRAY_WIDTH>, ARRAY_LENGTH> mapArray2D;

    Map(const bool (&a)[ARRAY_LENGTH][ARRAY_WIDTH])
    {
        for (int i = 0; i < ARRAY_LENGTH; ++i)
        {
            for (int j = 0; j < ARRAY_WIDTH; ++j)
            {
                mapArray2D[i][j] = a[i][j];
                map[i * ARRAY_WIDTH + j] = a[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < ARRAY_LENGTH; ++i)
        {
            for (int j = 0; j < ARRAY_WIDTH; ++j)
            {

                if (mapArray2D[i][j] == 1)
                    std::cout << "\u25A0";
                else
                    std::cout << " ";

                // std::cout << mapArray2D[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

const int ARRAY_LENGTH = 10;
const int ARRAY_WIDTH = ARRAY_LENGTH;

bool a[ARRAY_LENGTH][ARRAY_WIDTH] = {
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
