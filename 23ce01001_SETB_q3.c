#include<stdio.h>
int main(){
    int x,y,r,a,b,z,p,q;
    printf("Enter x coordinate of the centre: ");
    scanf("%d",&x);
    printf("Enter y coordinate of the centre: ");
    scanf("%d",&y);
    printf("Enter radius of the circle: ");
    scanf("%d",&r);

    printf("Enter point x1: ");
    scanf("%d",&a);
    printf("Enter point y1: ");
    scanf("%d",&b);
    
    p=(a-x);
    q=(b-y);

    z=p*p+q*q-r*r;
    // printf("%d\n",p);
    // printf("%d\n",q);
    // printf("%d\n",s);
    // printf("%d\n",z);

    if (z>0)
    {
        printf("Points %d , %d lies outside the circle",a,b);
    }
    else if (z<0)
    {
        printf("Points %d , %d lies inside the circle" ,a, b);
    }
    else
    {
        printf("Points %d , %d lies on the circle",a,  b);
    }
    return 0;

}
