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