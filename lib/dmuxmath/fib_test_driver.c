#include <stdio.h>
#include "fib.h"


int main() {

    for(int i = 0; i < 20; i++) {
        printf("%d \n", get_fibo_term(i));
    }

    return 0;
}