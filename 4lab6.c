#include <stdio.h>
void bmi(float w , float h);

void main(void) {
    float w,h;
    printf("weight (kg.):");
    scanf("%f", &w);
    printf("heigh (m.) :");
    scanf("%f", &h);
    bmi(w,h);
}

void bmi(float w , float h) {
    float bmi = w / (h*h) ;
    printf("bmi >> %f", bmi);
}