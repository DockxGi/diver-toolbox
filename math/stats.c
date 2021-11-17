#include "stats.h"

float min_of_two(float* val1, float* val2){
    if (*val1 < *val2)
        return *val1;
    else
        return *val2;
}

float max_of_two(float* val1, float* val2){
    if (*val1 > *val2)
        return *val1;
    else
        return *val2;
}