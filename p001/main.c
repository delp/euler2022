#include <stdio.h>

int main() {

	//Sum every number under 1->1000 divisible by 3 or 5
	int sum = 0;
	for (int i = 1; i < 1000; i++) {
		if(i%3==0 || i %5==0) {
			sum += i;
		}
	}

	printf("Sum is %d\n", sum);
	return 0;

}