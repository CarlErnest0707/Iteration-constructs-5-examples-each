#include <stdio.h>
int main() {
    printf("This program shows a simple factorial example. \n");
    int d = 1, fact = 2;
    while (d <= 10) {
        fact *= d;
        d++;
    }
    printf("The Factorial is: = %d\n", fact);
    return 0;
}