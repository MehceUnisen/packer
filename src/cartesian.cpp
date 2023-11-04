#include "cartesian.hpp"

float Cartesian::Diagonal(int x, int y) {
    return sqrt(x * x + y * y); 
}

std::pair<Coordinate, Coordinate> Cartesian::CoordinateDiagonal(Coordinate f, Coordinate t) {
    return nullptr;
}