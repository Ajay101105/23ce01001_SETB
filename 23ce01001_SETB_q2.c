#include<stdio.h>
int main(){
    
    
    for (int num = 1; num < 100; num++)
    {
        int x=0;
        for (int i = 1; i < num; i++)
        {
            if (num%i==0)
            {
                x=x+i;
                
            }
        
        }
        if (x==num)
        {
            printf("%d is a perfect number\n",num);
        }
    }
    return 0;
}