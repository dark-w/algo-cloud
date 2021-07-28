#include "heap.h"
#include "mm.h"
#include <iostream>

heap::heap(/* args */)
{
}

heap::~heap()
{
}

bool heap::heap_init(const int32_t config_heap_size) {
    std::cout << __func__ << std::endl;
    bool retbool = false;
    if (my_heap_init(config_heap_size) != 0)
        retbool = true;

    return retbool;
}

int64_t heap::malloc(const int32_t size) {
    std::cout << __func__ << std::endl;
    return (int64_t)my_malloc(size);
}

void heap::free(const int64_t addr) {
    std::cout << __func__ << std::endl;
    my_free((void *)addr);
}
