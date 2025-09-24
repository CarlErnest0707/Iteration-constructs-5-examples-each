#include <stdio.h>
int main(){
   int a = 0;
   printf("This program prints 1 - 10 \n"); //i inserted the number "1 - 1" instead of "1 - 10" because upon running, it actually shows "Count 1 - 10". 
    while (a < 11) {
        printf("%d\n", a);
        a++;
    }
    return 0;
}
