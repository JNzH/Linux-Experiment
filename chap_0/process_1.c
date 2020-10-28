#include <stdio.h>
#include <unistd.h>

int main(){
    fork();
    printf("Get child id:%d\n",getpid());
    printf("Get parent id:%d\n",getppid());
    printf("It will be print twices!\n");
    return 0;
}
