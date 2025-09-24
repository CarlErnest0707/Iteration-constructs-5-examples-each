#include <stdio.h>
int main() {
    int c = 4;
    printf("This program jumps by 4 numbers. \n");
    while (c <= 20) {
        printf("%d ", c); //I did not put the "\n" to "%d", because the output is better off that way (for me.)
        c += 4;
    }
    return 0;
}