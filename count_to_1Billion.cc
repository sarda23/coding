#include <stdio.h>
#include <time.h>

int main(){
    printf("Counting to 1 billion\n");
    int n = 0;
    float t;
    clock_t c;
    c = clock();

    while(n<1000000000){
        n++;
    }

    c = clock() - c;
    t = (float)c/CLOCKS_PER_SEC;
    printf("%d",n);
    printf("\n Elapsed time: %f",t);
}