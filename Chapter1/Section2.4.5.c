#include <stdio.h>
#include <math.h>

int main(){
    float radius = 10.0;
    float pi = 3.14159;
    float result = (4.0f/3.0f) * pi * powf(radius,3);

    printf("the volume of your sphere is %f", result);

    return 0;
}