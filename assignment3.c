#include <stdio.h>

int main() {
    int number , i , sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    do {
        i = number % 10;
        sum += i;
        number /= 10;
    } while(number != 0);
    printf("The sum of i is %d\n", sum);
    return 0;
}