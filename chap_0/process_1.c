#include <stdio.h>
#include <unistd.h>

int main(){
    fork();
    printf("It will be print twices!\n");
    return 0;
}