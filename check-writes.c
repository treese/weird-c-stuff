#include <stdio.h>
#include <string.h>

int sum;

float pi = 3.14159;
char msg5[] = "hello";
char msg7[] = "hello!!";
char *msgp = "where are we?";

int add3(int x) {
    return(x+3);
}

int print_addr(char *name, void *ptr) {
    printf("address of %s\t%p\n", name, ptr);
}

int main(int argc, char **argv) {
    char *msgcheck;
    int y = 2;

    y = 6;
    
    /* main = 0; */ /* Gets a compiler error. */

    /* Can assign to global num variables. */
    sum = 37;
    pi = 2.718;

    printf("msgp points to %p\n", msgp);
    /* msg5 = "what's up?";*/ /* Compiler error: can't assign to array type. */

    strcpy(msg5, "hi!");
    printf("msg5 is now %s\n");
    
}
