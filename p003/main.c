//Project Euler P003
#include <stdio.h>
#include <math.h>

long int num = 600851475143;


int main() {

    int p = 2;


    while (1) {
        if (!(num >= pow(p,2))) {
            printf("largest prime factor: %ld\n", num);
            return 0;
        } else {
            if (num % p == 0) {
                printf("%d is a factor\n", p);
                num = num / p;
            } else {
                p = p + 1;
            }
        }
    }
    return 0;
}