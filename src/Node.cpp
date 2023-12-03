#include "Node.h"
#include <vector>

enum class PathBranchStatus
{
    pathInProcess,
    pathFound,
    deadWay
};

class Node
{
private:
    int regardingMapCell;
    bool isCrossPoint;
    PathBranchStatus pathBranchStatus;

public:
    static std::vector<Node *> &getNodeVector()
    {
        static std::vector<Node *> v; // Static to retain values across calls
        return v;
    }

    Node()
    {
        getNodeVector().push_back(this); // Push the current instance into the static vector
    }

    Node *getNode(int regardingMapCell)
    {
        for (Node *node : getNodeVector())
        {
            if (node->regardingMapCell == regardingMapCell)
            {
                return node;
            }
        }
        return nullptr; // Return nullptr if not found
    }
};
