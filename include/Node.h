#ifndef NODE_H
#define NODE_H

#include <vector>

class Node;

extern std::vector<Node> nodeVector; // Declaration of the global vector

enum PathBranchStatus
{
    pathInProcess,
    pathFound,
    deadWay
};

class Node
{
private:
    int regardingMapCell;
    Node *parentNode;
    bool isCrossPoint;
    PathBranchStatus pathBranchStatus;

public:
    static std::vector<Node *> &getNodeVector();

    Node();

    Node *getNode(int regardingMapCell);
};

#endif /* NODE_H */