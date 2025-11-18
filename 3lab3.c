#include <stdio.h>

int main() {
    int a=0;
    int c;
    int b;
    
    printf(" enter NUMBER :");
    scanf("%d", &b);

    while (a<=12) {
        c = b * a;
        printf("%d * %d = %d \n", b,a,c);
        a++;
    }


    return 0;
}