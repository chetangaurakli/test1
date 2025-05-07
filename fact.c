#include<stdio.h>

factor() {
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 1) {
        factorial = factorial * number;
        number--;
    }

    printf("Factorial is: %d", factorial);
  }
