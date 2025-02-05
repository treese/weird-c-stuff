#include <stdio.h>

int sum;
int total;

int mycount = 5;
int mycount2 = 7;
float pi = 3.14159;
char msg5[] = "hello";
char msg7[] = "hello!!";

int add3(int x) {
    return(x+3);
}

int print_addr(char *name, void *ptr) {
    printf("%p %s\n", ptr, name);
}

int main(int argc, char **argv) {
    int y = 2;
    print_addr("y", &y);
    print_addr("main", main);
    print_addr("add3", add3);
    print_addr("sum", &sum);
    print_addr("total", &total);
    print_addr("mycount", &mycount);
    print_addr("pi", &pi);

    /* Already pointer values.*/
    print_addr("msg5", msg5);
    print_addr("msg7", msg7);
}
