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
            printf("dai law ja");
        }
        
    } 
    retrun 0;
}