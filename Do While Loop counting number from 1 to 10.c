#include <stdio.h>
int main() {
    printf("This Program shows do while method printing 1 to 5\n");
    int a = 1;
    do {
        printf("%d\n", a);
        a++;
    } while(a <= 10);
    return 0;
}