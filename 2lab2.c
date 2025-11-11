#include <stdio.h>


int main() {
    int score ;
    //st:
    printf("put your score :");
    scanf("%d", &score);

    if( score >= 80 && score <= 100) {
        printf("A \n");
    } 
    
    else if( score >= 70 && score <= 79) {
        printf("B\n");
    }

    else if( score >= 60 && score <= 69) {
        printf("C\n");
    }

    else if( score >= 50  && score <= 59) {
        printf("D\n");
    }

    else if( score >= 0  && score <= 49) {
        printf("F\n");
    } 

    else {
        printf ("error");
    }
    
    //goto st;
}