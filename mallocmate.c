#include <stdio.h>
#include <stdlib.h>

int main(){
    for(;;){
        int mem  = malloc(1000);
        printf("Allocating memory: %d \n", mem);
    }
    return 0;
}