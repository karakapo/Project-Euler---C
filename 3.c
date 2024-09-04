#include <stdio.h>
int checkprime(unsigned long long int num);
main() {
	int counter;
	unsigned long long int  i;
	unsigned long long int num = 600851475143; 
	 for(i =2;i<=num;i++){ 
            counter = 0; 
            while(checkprime(i) == 1 && (num%i) == 0){ 
                num = num/i; 
                counter++; 
            }  
            if(counter>0){
                printf("\n%llu sayının içinde %d kez var",i,counter);
            }	
}
}
int checkprime(unsigned long long int num) { 
	int b,prime=1;
	for(b=2;b<=num/2;b++) {
		if( (num%b)==0) {
		prime=0;
		break;
		}
	}
	return prime;
}
