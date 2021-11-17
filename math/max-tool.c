/*
 * Tool to calculate the minimum value of a list of values.
 * Expects the values to be separated by spaces and one space at the end. (example: 10.2 9.12 3.13 )
 */
#include <stdio.h>
#include "stats.h"

int main(){
    short firstVal = 1;
    float currMax;
    float val;

    while (scanf("%f ", &val) == 1){
        if (firstVal){
            currMax = val;
            firstVal = 0;
        } else {
            currMax = max_of_two(&currMax, &val);
        }
    }

    printf("%f\n", currMax);
    return 0;
}