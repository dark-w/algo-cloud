#pragma once
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

int my_heap_init(size_t config_heap_size);

void *my_malloc(size_t size);

void my_free(void *p);

struct list_head *get_heap_head_list(void);

#ifdef __cplusplus
}
#endif
