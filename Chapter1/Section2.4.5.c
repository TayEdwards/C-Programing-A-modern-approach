#include <stdio.h>
#include <math.h>

int main(){
    float userInput = 10.0;
    float exponent = 3.0;
    float radius = pow(userInput,exponent);
    float pi = 3.14;
    float v = 4.0/3.0;

    printf("%d", (v*pi*radius));
}