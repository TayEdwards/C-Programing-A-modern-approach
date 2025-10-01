#include <stdio.h>

int main(){
    //Section3.1.1
    printf("%6d, %4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);
    //Section3.1.2
    float x = 1223.13210;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6f\n", x);

    return 0;
}