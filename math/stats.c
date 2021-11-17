#include "stats.h"

//Sets the min value to val if val is lower than the initial min value.
float min_of_two(float* val1, float* val2){
    if (*val1 < *val2)
        return *val1;
    else
        return *val2;
}

