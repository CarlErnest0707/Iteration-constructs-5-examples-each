#include <stdio.h>
int main() {
    int b = 10;
    printf("This program counts down from 10 to 1 \n"); //
    while (b > 0) {
        printf("%d\n", b);
        b--;
    }
    return 0;
}