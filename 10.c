#include <stdio.h>
#include <math.h>

int checkprime(long long int num) {

	for(int i=2; i<=(int)sqrt(num); i++) {
		if (num%i==0) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	long long int sum=0;

	for(long long int i =3; i<2000000; i +=2) {
		if(checkprime(i)==1) {
			sum +=i;

		}
	}
	printf("%lld",sum);
	return 0;
}
