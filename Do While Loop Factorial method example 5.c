#include <stdio.h>
int main() {
    printf("This program shows the Factorial method in Do-While Loop \n");
    int f = 5, fact = 1;
    do {
        printf("Factorial = %d\n", fact);
        fact *= f;
        f++;
    } while(f <= 120);
    return 0;
}