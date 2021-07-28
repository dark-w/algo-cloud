#include "heap.h"
#include <iostream>

heap::heap(/* args */)
{
}

heap::~heap()
{
}

bool heap::heap_init(const int32_t config_heap_size) {
    std::cout << __func__ << std::endl;
    return false;
}

int64_t heap::malloc(const int32_t size) {
    std::cout << __func__ << std::endl;
    return 0;
}

void heap::free(const int64_t addr) {
    std::cout << __func__ << std::endl;
}
