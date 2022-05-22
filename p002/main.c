#include <stdio.h>
#include <stdlib.h>

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

void newline() {
    printf("\n");
}

//Sum of even-numbered fibonacci numbers whose values do not 
//exceed 4 million
int main() {
    
    int index = 0;
    int latest = 0;
    int sum = 0;
    while (latest < 4000000) {
        latest = get_fibo_term(index);
        if ((latest < 4000000) && (latest %2 == 0))  {
            sum += latest;
        }
        index++;
    }
    printf("The sum of even-numbered fibonacci terms with values under 4,000,000 is %d", sum);
    newline();
    return 0;
}