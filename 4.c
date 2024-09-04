#include <stdio.h>


int checkpalidroms(long int num) {
	long int original_num=num;
	long int reversed_num =0;
	int r;


	while(num !=0) {
		r =num %10;
		reversed_num = reversed_num*10+r;
		num /=10;

	}

	if (reversed_num==original_num) {

		return 1;
		
	}else{
	    
	    return 0;
}

}

int main()
{
  
  int a,result;
  int b;
  int num;

for(a=1000;a>100;a--){
  for(b=1000;b>100;b--){
    num =a*b; 
    if(checkpalidroms(num)==1){
      if (num > result){
        
        result = num;
        
        
      }
      
      
    }
    
    
    
    
  }
  
}


	printf("%d",result);



	return 0;
}
