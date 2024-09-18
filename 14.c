#include <stdio.h>

int check(int i) {
	if(i%2 == 0 ) {

		return 1;


	}

	return 0;

}



int main() {

	int max_counter=0;
	long int number_with_max_counter=0;


	for(long int i=2; i<1000000; i++) {
		int counter=0;
		long int temp = i ;

		while(temp!=1) {
			if(check(temp)==1 ) {
				temp = temp/2;
			} else {
				temp = 3*temp+1;
			}
			counter++;
		}
		if(counter>max_counter) {
			max_counter = counter;
			number_with_max_counter = i;


		}


	}


	printf("%d\n",max_counter);
	printf("%ld",number_with_max_counter);



	return 0;
}
