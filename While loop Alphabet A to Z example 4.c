#include <stdio.h>
int main() {
    char ch = 'A';
    printf("This program shows the Alphabets from A - Z \n");
    while (ch <= 'Z') {
    printf("%c\n", ch);
    ch++;
    }
    return 0;
}