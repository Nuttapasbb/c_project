#include <stdio.h>

int main() {
    int a = 10;
    float b ;
    
    printf("put your number : ");
    scanf("%f", &b);

    if ( a < b) {
        printf("b is god \n");
    } 
    else {
        printf("put new number :");
        scanf("%f", &b);
            if ( b > a) {
                printf("b is got : %f", b);
         } 
    
    } 
    return 0;
}