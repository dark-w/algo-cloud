#pragma once

#include <stdint.h>

class heap
{
private:
    /* data */
public:
    heap(/* args */);
    ~heap();

    bool heap_init(const int32_t config_heap_size);
    int64_t malloc(const int32_t size);
    void free(const int64_t addr);
};
