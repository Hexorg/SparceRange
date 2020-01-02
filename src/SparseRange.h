#ifndef __SPARSE_RANGE_H__
#define __SPARSE_RANGE_H__

#include <stddef.h>
#define RANGE_TYPE float

typedef struct SparseRange_s {
    RANGE_TYPE from;
    RANGE_TYPE to;
    void * data;
} SparseRange_t;


SparseRange_t* new_sparse_range(size_t maxLen);

#endif