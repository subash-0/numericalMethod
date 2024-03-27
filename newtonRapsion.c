#include <stdio.h>
#include <math.h>
#define  f(x) x*x*x-4*x+1
#define g(x) 3*x*x-4
#define e 0.0001


int main()
{
    float x0,x1,f0,f1,df0;
    int i=0;
    up:
    printf("Enter the value of x0:");
    scanf("%f",&x0);

    if(g(x0)==0){
        printf("\nMathmatical Error !\n");
         goto up;
    }
    do {
       
        f0 = f(x0);
        df0 = g(x0);
         x1 = x0 - (f0/df0);
        f1 = f(x1);
        x0 = x1;
        i++;
        printf("Iteration: %d \t x1 : %0.4f \t f(x1) : %0.4f \n",i,x1,f1);

    
      
    }while (fabs(f1)>e);
    printf("\n  Required root : %0.4f",x1);
    return 0;
}