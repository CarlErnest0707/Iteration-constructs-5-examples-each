#include <stdio.h>
int main() {
    printf("This Do-While Program Countsdown from 10 to 1\n");
    int b = 10;
    do {
        printf("%d\n", b);
        b--;
    } while(b >= 1);
    return 0;
}