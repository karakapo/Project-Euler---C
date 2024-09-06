#include <stdio.h>
#include <math.h>



int bolen_s(int num){
    
int i,counter=0;

for(i=1;i<=(int) sqrt(num);i++){
    if(num%i==0){
       if(i==num/i){
           counter++;
       }else{
           
           counter+=2;
       }
        
    }
  }
  return counter;
}

int triangle(int n){
    return n*(n+1)/2;
    
    
    
}


int main()
{
    int i,sum,triangle_num;  
    for (i = 1; ; i++) {
        triangle_num = triangle(i);
        if (bolen_s(triangle_num) >= 500) {
            printf("%d\n", triangle_num);
            break;
        }
    }
    
    
    return 0;
}
