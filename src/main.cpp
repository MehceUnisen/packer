#include "packer.hpp"

int main () {
    Packer packer;
    int dataSet = 0;
    if (!packer.pack(0)) {
        exit(0);
    }
    exit(-1);
}