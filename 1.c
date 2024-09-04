
#include <stdio.h>

int sum =0;
int i;

int main() {

	for (i=0; i< 1000; i++) {

		if(i%3 == 0 || i%5 ==0) {

			sum+=i;

		}
	}

	printf("%d",sum);

	return 0;
}

