#include <stdio.h>

int main() {
    int a=0;
    int c;
    
    while (a<=12) {
        c = 2 * a;
        printf("2 * %d = %d \n", a,c);
        a++;
    }
    return 0;
}