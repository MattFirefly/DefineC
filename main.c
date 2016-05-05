#include <stdio.h>
#include <stdlib.h>

#define THE_NUM 2
#define WIN 1
#define LINUX 2
#define MAC 3

void sayHello() {
#if PLATFORM == WIN
    printf("hello windows\n");
#elif PLATFORM == LINUX
    printf("hello Linux\n");
#elif PLATFORM == MAC
    printf("hello Mac\n");
#else
    printf("Unknow Platform\n");
#endif
}

int main() {
    sayHello();
    printf("define num=%d\n", THE_NUM);
    return EXIT_SUCCESS;
}