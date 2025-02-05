#include <stdio.h>

int main(int argc, char **argv) {
    char more[25];
    char buf[5];
    char more2[25];

    printf("Reading input...\n");
    fgets(buf, 1000, stdin);
    printf("buf: %s\n", buf);
    printf("more: %s\n", more);
    printf("more2: %s\n", more2);
}
