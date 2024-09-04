

#include <stdio.h>

int main()
{
    int a ;
    int i ;
    int num1=0;
    int num2=1;
    
    
    for(i=0;i<10;i++){
        
        a= num1 + num2;  
        num1 = num2; 
        num2 = a;
        
        printf("%d\n",num1);
    }
    
    
    return 0;
}