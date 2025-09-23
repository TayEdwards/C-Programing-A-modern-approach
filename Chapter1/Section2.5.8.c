#include <stdio.h>

int main(){
    float value, result, tax;

    printf("Enter dollar amount: ");
    scanf("%f", &value);

    tax = value * 0.05;
    result = value + tax;

    printf("With tax added %.2f", result);
}