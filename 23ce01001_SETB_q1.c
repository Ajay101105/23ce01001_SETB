#include<stdio.h>
int main(){
    int r,h;
    float cs,v,ts;
    printf("Enter radius of the cylinder: ");
    scanf("%d",&r);
    printf("Enter height of the cylinder: ");
    scanf("%d",&h);
    v=3.14*r*r*h;
    cs=2*3.14*r*h;
    ts=(2*3.14*r*r)+(2*3.14*r*h);

    printf("\nVolume of cylinder is %0.2f",v);
    printf("\nCurved Surface area of cylinder is %0.2f",cs);
    printf("\nTotal Surface area of cylinder is %0.2f",ts);
    return 0;
}