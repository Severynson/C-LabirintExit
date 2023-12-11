// #ifndef MAPNODE_H
// #define MAPNODE_H

// #include <vector>

// class MapNode;

// extern std::vector<MapNode> nodeVector; // Declaration of the global vector

// enum class PathBranchStatus
// {
//     pathInProcess,
//     pathFound,
//     deadWay
// };

// class MapNode
// {
// private:
//     int regardingMapCell;
//     MapNode *parentNode;
//     bool isCrossPoint;
//     PathBranchStatus pathBranchStatus;

// public:
//     static std::vector<MapNode *> &getNodeVector();

//     MapNode(int regardingMapCell, MapNode* parentNode, bool isCrossPoint, PathBranchStatus status);

//     MapNode *getNode(int regardingMapCell);
// };

// #include "../src/MapNode.cpp" // Include the implementation file

// #endif /* MAPNODE_H */

/////////////////////

// #ifndef MAPNODE_H
// #define MAPNODE_H

// #include <vector>

// // enum class PathBranchStatus {
// //     pathInProcess,
// //     pathFound,
// //     deadWay
// // };

// class MapNode {
// private:
//     int regardingMapCell;
//     MapNode* parentNode;
//     bool isCrossPoint;
//     // PathBranchStatus pathBranchStatus;

// public:
//     static std::vector<MapNode*>& getNodeVector();

//     MapNode(int regardingMapCell, MapNode* parentNode, bool isCrossPoint
//     // ,PathBranchStatus status
//     );

//     MapNode* getNode(int regardingMapCell);
// };

// #endif /* MAPNODE_H */

//////

// #include <vector>

// #ifndef MAPNODE_H
// #define MAPNODE_H

// extern std::vector<MapNode> nodeVector; // Declaration of the global vector

// class MapNode
// {
// private:
//     int regardingMapCell;
//     MapNode *parentNode;
//     bool isCrossPoint;

// public:
//     static std::vector<MapNode *> &getNodeVector();

//     MapNode(int regardingMapCell,
//             MapNode *parentNode,
//             bool isCrossPoint);
// };

// #include "../src/MapNode.cpp"

// #endif /* MAPNODE_H */

#ifndef MAPNODE_H
#define MAPNODE_H

#include <vector>

class MapNode
{
private:
    int regardingMapCell;
    MapNode *parentNode;
    bool isCrossPoint;

public:
    MapNode(int regardingMapCell, MapNode *parentNode, bool isCrossPoint);

    static std::vector<MapNode *> &getNodeVector();
    static std::vector<MapNode *> nodeVector;
};

#include "../src/MapNode.cpp"

#endif /* MAPNODE_H */