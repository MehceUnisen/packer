#include "util.hpp"
#include <cmath>
#include <utility>

typedef std::vector<std::vector<int>> Coordinate;

class Cartesian
{
private:
    
public:
    static float Diagonal(int x, int y);
    static std::pair<Coordinate, Coordinate> CoordinateDiagonal();
};
