#include "packer.hpp"

bool Packer::pack(int dataSet) {
    FileReader reader;
    m_dataSet = reader.read("data_set/C1_1");
}