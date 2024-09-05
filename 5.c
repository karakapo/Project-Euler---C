#include <stdio.h>


int ebob(int a,int b) {

	int i,num;

	for(i=a; i>0; i--) {
		if (a %i==0 && b%i==0) {
			num = i;
			break;
		}
	}
	return num;
}

int ekok(int a,int b) {

	int ekok;

	ekok = (a*b)/ebob(a,b);


	return ekok;

}

int main()
{
	int i,num=1;
	for(i=2; i<20; i++) {
		num =ekok(num,i);


	}

	printf("%d",num);

	return 0;
}
