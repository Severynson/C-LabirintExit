#include <iostream>
#include <thread>
#include <array>

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
class Map
{
private:
    std::array<int, ARRAY_WIDTH * ARRAY_LENGTH> map;

public:
    std::array<std::array<int, ARRAY_WIDTH>, ARRAY_LENGTH> mapArray2D;

    Map(const int (&a)[ARRAY_LENGTH][ARRAY_WIDTH])
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
        // In console symbol's width is 2x less then hight. So storing 2 same symbols in each const;
        const std::string greenSquare = "\033[3;42;30m \033[0m\033[3;42;30m \033[0m";
        const std::string whiteSquare = "\033[3;47;35m \033[0m\033[3;47;35m \033[0m";
        const std::string emptySquare = "  ";

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
                    std::cout << emptySquare;
                else
                    std::cout << whiteSquare;
            }
            std::cout << std::endl;
            if (i == ARRAY_LENGTH - 1)
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }
};

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