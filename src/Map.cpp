#include "../include/Map.h"
#include "../include/Node.h"

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
Map<ARRAY_LENGTH, ARRAY_WIDTH>::Map(const int (&a)[ARRAY_LENGTH][ARRAY_WIDTH])
{
    for (int i = 0; i < ARRAY_LENGTH; ++i)
    {
        for (int j = 0; j < ARRAY_WIDTH; ++j)
        {
            mapArray2D[i][j] = a[i][j];
            map[i * ARRAY_WIDTH + j] = a[i][j];
        }
    }
};

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
void Map<ARRAY_LENGTH, ARRAY_WIDTH>::display()
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
#endif

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
};

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
void Map<ARRAY_LENGTH, ARRAY_WIDTH>::findEntrancePoints()
{
    for (int i = 0; i < ARRAY_LENGTH; ++i)
    {
        for (int j = 0; j < ARRAY_WIDTH; ++j)
        {
            if ((i == 0 || i == ARRAY_LENGTH - 1) || (j == 0 || j == ARRAY_WIDTH - 1))
            {
                if (map[i * ARRAY_WIDTH + j] == 1)
                {
                    if (!this->exitIndex)
                    {
                        this->exitIndex = i * ARRAY_WIDTH + j;
                    }
                    else
                    {
                        if (this->entranceIndex)
                        {
                            throw("More than one entrance detected!");
                        }
                        this->entranceIndex = i * ARRAY_WIDTH + j;
                    }
                }
            }
        }
    }

    if (this->exitIndex == 0)
    {
        throw("No exit found!"); // Throws error if this->exitIndex is still zero
    }

    std::cout << "Entrance: " << this->entranceIndex << ", Exit: " << this->exitIndex << std::endl;
    std::cout << ARRAY_LENGTH << ' ' << ARRAY_WIDTH << std::endl;
};

template <int ARRAY_LENGTH, int ARRAY_WIDTH>
void Map<ARRAY_LENGTH, ARRAY_WIDTH>::findExitWay()
{
    this->display();
    this->findEntrancePoints();
};