#include <stdio.h>

int main(){
    float val;
    float sum;

    while(scanf("%f", &val) == 1){
        sum = sum + val;
    }

    printf("%f\n", sum);

    return 0;
}

