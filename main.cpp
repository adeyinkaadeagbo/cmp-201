#include <stdio.h>

int main () {
    int number;
    float average;
    int number2;
    number = 20;
    number2 = 30;
    printf("the value of number is: %d", number);
    printf("\nthe value of number2 is: %d", number2);
    average = (number + number2)/2;
    printf ("\nthevalue of average is: %f", average);
    return 0;
}