//
// Created by Yaman Alhalabi on 13.09.2023.
//

#ifndef TLANG_C_MEMORY_H
#define TLANG_C_MEMORY_H

#include "../common.h"
#include "object.h"

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

void* reallocate(void* pointer, size_t oldSize, size_t newSize);
void freeObjects();

#define FREE(type, pointer) reallocate(pointer, sizeof(type), 0)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldCount), \
        sizeof(type) * (newCount))


#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

#define ALLOCATE(type, count) \
    (type*)reallocate(NULL, 0, sizeof(type) * (count))

#endif //TLANG_C_MEMORY_H
