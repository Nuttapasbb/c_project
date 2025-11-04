#include <stdio.h>

int main() {
    float w ;
    float h ;
    float bmi ;

    printf("heigh (m) : ");
    scanf("%f",&h);

    printf("้wight (kg):");
    scanf("%f",&w);

    bmi = w / (h*h) ;
    printf("bmi = %.2f", bmi);
    return 0;
}