#include<stdio.h>
int main(){
    int n,z;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        
        for (int j=1; j<n ; j++)
        {

            if (n%j==0)
            {
                arr[i]=j;   
            }
        }    
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            z=arr[i]+arr[j];
            if (z==n)
            {
                printf("%d  %d",arr[i],arr[j]);
            }
            
        }
        
    }
    
    
    return 0;

}