#include <stdio.h>
#include <math.h>

int main(){
    float radius;
    float pi = 3.14;

    printf("Please enter the radius of your sphere: ");
    scanf("%f", &radius);
    float result = (4.0f/3.0f) * pi * powf(radius, 3);
    printf("the volume of your sphere is %f", result);

    return 0;
}