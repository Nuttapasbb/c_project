#include <stdio.h>
void vat(int p);

void main(void) {
    float p;
    printf("enter price :");
    scanf("%f", &p);
    vat(p);
}

void vat(int p) {
    float vat = p * 7/100 ;
    float price = p + vat ;
    
    printf(" total >> %f \n", price);
    printf(" vat >> %f", vat);
}