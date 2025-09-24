#include <stdio.h>
int main() {
    printf("This program prints in the Alphabetical order, (from A to Z) \n");
    char ch = 'A';
    do {
        printf("%c\n", ch);
        ch++;
        
    } while(ch <= 'Z');
    return 0;
}