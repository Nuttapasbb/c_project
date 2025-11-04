#include<stdio.h>

int main() {
    float a ;
    float b ;

    printf("high : ");
    scanf("%f", &a);
    printf("base : ");
    scanf("%f", &b);
    printf("**************************************************************** \n");
    printf("1/2 * high * base = %f \n", 0.5 * a * b );
    printf("**************************************************************** \n");
    printf("high = %.2f \n",a);
    printf("base = %.2f\n",b);
    printf("area = %.2f\n", 0.5 * a * b );
    printf("------------------------------------------------------------ \n");
    return 0;
}