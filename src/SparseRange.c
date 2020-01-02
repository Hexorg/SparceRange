#include "SparseRange.h"

#include <stdlib.h>

SparseRange_t* new_sparse_range(size_t maxLen) {
    return (SparseRange_t*) malloc(sizeof(SparseRange_t)*maxLen);
}