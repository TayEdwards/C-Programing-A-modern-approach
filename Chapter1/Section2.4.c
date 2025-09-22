#include <stdio.h>

int main(){
    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;

    printf("Dimensions: %dx%dx%dx\n", length,width,height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}