#include <stdio.h>

int main()
{
    
    int a,b,c,num;
    
    
    for(a=1;a<1000;a++){
        for(b=1;b<1000;b++){
            c = 1000-a-b;
            if(c*c == a*a+b*b){
                num=a*b*c;
                
                
            }
            
            
            
        }
    }
    
    
    printf("%d",num);
    
    
    
    return 0;
}
