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