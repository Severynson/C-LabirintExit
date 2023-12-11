// #include "../include/MapNode.h"
// #include <vector>

// std::vector<MapNode *> &MapNode::getNodeVector()
// {
//     static std::vector<MapNode *> v;
//     return v;
// }

// MapNode::MapNode(int regardingMapCell, MapNode *parentNode, bool isCrossPoint, PathBranchStatus status) : regardingMapCell(regardingMapCell),
//                                                                                                           parentNode(parentNode),
//                                                                                                           isCrossPoint(isCrossPoint),
//                                                                                                           pathBranchStatus(status)
// {
//     getNodeVector().push_back(this);
// }

// MapNode *MapNode::getNode(int regardingMapCell)
// {
//     for (MapNode *node : getNodeVector())
//     {
//         if (node->regardingMapCell == regardingMapCell)
//         {
//             return node;
//         }
//     }
//     return nullptr;
// }

///////////

// #include "../include/MapNode.h"
// #include <vector>

// std::vector<MapNode *> &MapNode::getNodeVector()
// {
//     static std::vector<MapNode *> v;
//     return v;
// }

// MapNode::MapNode(int regardingMapCell, MapNode *parentNode, bool isCrossPoint)
//     : regardingMapCell(regardingMapCell),
//       parentNode(parentNode),
//       isCrossPoint(isCrossPoint)
// {
//     std::cout << "Does it work?" << std::endl;
//     getNodeVector().push_back(this);
// }

// MapNode *MapNode::getNode(int regardingMapCell)
// {
//     for (MapNode *node : getNodeVector())
//     {
//         if (node->regardingMapCell == regardingMapCell)
//         {
//             return node;
//         }
//     }
//     return nullptr;
// }

//////////////////////

#include "../include/MapNode.h"

MapNode::MapNode(int regardingMapCell,
                 MapNode *parentNode,
                 bool isCrossPoint) : regardingMapCell(regardingMapCell), parentNode(parentNode), isCrossPoint(isCrossPoint){};
