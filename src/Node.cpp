#include "Node.h"
#include <cmath>

int G2D_Node::distance(const Node<int>& _n) {
    return abs(x - _n.x) + abs(y - _n.y);
}