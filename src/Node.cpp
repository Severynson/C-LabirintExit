#include "Node.h"

#ifndef NODE_H
#define NODE_H

#include <vector>

enum class PathBranchStatus {
    pathInProcess,
    pathFound,
    deadWay
};

class Node {
private:
    int regardingMapCell;
    bool isCrossPoint;
    PathBranchStatus pathBranchStatus;

public:
    static std::vector<Node*>& getNodeVector() {
        static std::vector<Node*> v; // Static to retain values across calls
        return v;
    }

    Node() {
        getNodeVector().push_back(this); // Push the current instance into the static vector
    }

    Node& getNode(int regardingMapCell) {
        // Your logic to get a specific node
        // For instance:
        // ...
        return *this;
    }
};

#endif /* NODELIST_H */