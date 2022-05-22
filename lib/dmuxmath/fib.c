#include "fib.h"

int get_fibo_term(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    if (n <= 0) {
        return 0;
    }

    int term = 0;
    int a = 1;
    int b = 2;
    for (int i = 0; i < n-2; i++) {
        term = a + b;
        a = b;
        b = term;
    }
    return term;
}
