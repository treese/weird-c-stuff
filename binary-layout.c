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

int main(int argc, char **argv) {
    int y = 2;
    printf("add3 of %d is %d\n", y, add3(y));
}
