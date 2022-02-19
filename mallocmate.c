#include <stdio.h>
#include <stdlib.h>

int main(){
    for(;;){
        void *__cdecl mem  = malloc(1000);
        printf("Allocating memory: %d \n", mem);
    }
    return 0;
}
