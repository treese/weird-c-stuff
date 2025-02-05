#include <stdio.h>

int main(int argc, char **argv) {
    char buf[5];

    printf("Reading input...\n");
    fgets(buf, 1000, stdin);
    printf(buf);
}
