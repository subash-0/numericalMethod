#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-2*x-5

void main()
{
    float x0,x1,x2;
    float f0,f1,f2;
    int i=0;
   
   
    printf("Enter the values of x0 and x1:");
    scanf("%f %f",&x0,&x1);
    do{
        f0 = f(x0);
        f1 = f(x1);
        x2 = ((x0*f1)-(x1*f0))/(f1-f0);
        f2 = f(x2);
        f0=f1;
        f1=f2;
        x0=x1;
        x1=x2;
        i++;
       
        printf("SN.:%d \t X0: %0.3f \t X1: %0.3f \t X2: %0.3f \t F2: %0.3f \n",i,x0,x1,x2,f2);
    }while(fabs(f2)>e);
    printf("Root of equation: %0.3f",x2);
   
}