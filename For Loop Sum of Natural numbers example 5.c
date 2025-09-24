#include <stdio.h>
int main() {
    printf("This program is the sum of natural numbers\n");
    int sum = 0;
    for(int f = 3; f <= 7; f++) {
        sum += f;
        printf("Sum = %d\n", sum);
    }
    return 0;
}