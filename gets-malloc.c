#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_addr(char *name, void *ptr) {
    printf("%p %s\n", ptr, name);
}

int main(int argc, char **argv) {
    char *buf = malloc(5);
    char *more = malloc(1000);

    strcpy(more, "date");

    printf("Reading input...\n");
    fgets(buf, 1000, stdin);
    printf("buf: %s\n", buf);
    printf("more: %s\n", more);
    
    /* print addresses */
    print_addr("buf", buf);
    print_addr("more", more);

    /* Run a command. */
    system(more);
    printf("All done!\n");
}
