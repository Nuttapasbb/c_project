#include <stdio.h>
void triangle(int b , int h);

void main(void) {
    int b;
    int h;
    
    printf("enter base :");
    scanf("%d", &b);
    printf("enter high :");
    scanf("%d", &h);

    triangle(b ,h);
}

void triangle(int b , int h) {
    float ans = 0.5*b*h ;
    printf("ans = %.2f", ans);
}