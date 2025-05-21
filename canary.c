#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void win(){
    system("/bin/sh");
}

void init() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){
    init();
    char buf[0x30];
    printf("input buf: ");
    scanf("%s", buf);
    return 0;
}