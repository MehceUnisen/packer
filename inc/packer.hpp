#include <iostream>
#include "file_reader.hpp"

class Packer
{
private:
    std::vector<std::vector<int>> m_occupied;
    std::vector<std::vector<int>> m_corners;

    std::vector<std::vector<int>> m_dataSet;


public:
    bool pack(int dataSet);
};
