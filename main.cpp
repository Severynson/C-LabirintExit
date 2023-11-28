#include <iostream>
#include <thread>
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

// Clearing the old one frame before showing the new one;
#if _WIN32
        system("cls");
#else
        system("clear");
#endif;

        for (int i = 0; i < ARRAY_LENGTH; ++i)
        {
            for (int j = 0; j < ARRAY_WIDTH; ++j)
            {

                if (mapArray2D[i][j] == 1)
                    std::cout << "\u25A0";
                else
                    std::cout << " ";
            }
            std::cout << std::endl;
            if (i == ARRAY_LENGTH - 1)
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
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
bool b[ARRAY_LENGTH][ARRAY_WIDTH] = {
    /**/ {1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    /**/ {1, 0, 0, 1, 1, 1, 1, 1, 0, 0},
    /**/ {1, 1, 0, 0, 0, 0, 0, 1, 0, 0},
    /**/ {1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
    /**/ {1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    /**/ {1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    /**/ {1, 0, 0, 1, 1, 1, 1, 1, 0, 0},
    /**/ {1, 1, 0, 0, 0, 0, 0, 1, 0, 0},
    /**/ {1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
    /**/ {1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
};

int main()
{
    Map<ARRAY_LENGTH, ARRAY_WIDTH> myMap(a);
    Map<ARRAY_LENGTH, ARRAY_WIDTH> myMap2(b);
    myMap.display();
    myMap2.display();
    return 0;
}

// #include <iostream>
// #include <thread>
// #include <chrono>

// int main() {
//     for (int i = 0; i <= 100; ++i) {
//         std::cout << "\rProgress: " << i << "%";
//         std::cout.flush();
//         std::this_thread::sleep_for(std::chrono::milliseconds(100));
//     }
//     std::cout << std::endl; // Add a newline when finished
//     return 0;
// }