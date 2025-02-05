#include <stdio.h>

int print_addr(char *name, void *ptr) {
    printf("%p %s\n", ptr, name);
}

int main(int argc, char **argv) {
    char more[25];
    char buf[5];
    char more2[25];

    printf("Reading input...\n");
    fgets(buf, 1000, stdin);
    printf("buf: %s\n", buf);
    printf("more: %s\n", more);
    printf("more2: %s\n", more2);

    /* print addresses */
    print_addr("buf", buf);
    print_addr("more", more);
    print_addr("more2", more2);
}
