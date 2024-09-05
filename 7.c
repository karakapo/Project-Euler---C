#include <stdio.h>
#include <math.h>

int prime(int a){
    if(a ==2){
        return 1;
        
    }
    if(a ==1){
        return 0;
        
    }
     if(a %2==0){
        return 0;
        
    }

 for(int i=3;i<a/2;i++){
     if (a%i==0){
         return 0;
     }
         
       
   } 
   
   return 1;
}


int main()
{
    int a=1,counter=0,num;
    
    while(counter<10001){
        a++;
        if(prime(a)==1){
            counter++;
        }
        if(counter==10001){
            num =a;
            break;
            
        }
        
        
        
    }
    
    
    printf("%d\n",num);
    
    
    return 0;
}
