#include <stdio.h>
void number(int n);

void main(void) {
    int n;
    printf("Number :");
    scanf("%f", &n);
    number();
}

void number(int n) {
    int b,c ;
    for(b=1 ; b= 12 ; b++) {
        printf("%d * %d = %d \n", n , b , c);
    }

}