#include <stdio.h>

int main()
{
    int n,sum,product,result;
    n=100;
    
    sum = n*(n+1)/2;
    int x = sum*sum;
    
    
    for(int i=1;i<101;i++){
        product += i*i;
        
    }
    
    result = x-product;
    
    printf("%d",result);
    
    return 0;
}
