/*
 * Tool to calculate the minimum value of a list of values.
 * Expects the values to be separated by spaces and one space at the end. (example: 10.2 9.12 3.13 )
 */
#include <stdio.h>
#include "stats.h"

int main(){
    short firstVal = 1;
    float currMin;
    float val;

    while (scanf("%f ", &val) == 1){
        if (firstVal){
            currMin = val;
            firstVal = 0;
        } else {
            currMin = min_of_two(&currMin, &val);
        }
    }

    printf("%f\n", currMin);
    return 0;
}