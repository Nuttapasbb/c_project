#include <stdio.h>
void triangle(int b , int h);

void main(void) {
    triangle( 3 , 4 );
}

void triangle(int b , int h) {
    float ans = 0.5*b*h ;
    printf("ans = %.2f", ans);
}