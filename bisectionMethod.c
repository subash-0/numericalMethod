#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-2*x-5

int main()
{
    float x0,x1,x2;
    float f0,f1,f2;
    int i=0;
   
   
    printf("Enter the values of x0 and x1:");
    scanf("%f %f",&x0,&x1);
    do{
        f0 = f(x0);
        f1 = f(x1);
        x2 = (x1+x0)/2;
        f2 = f(x2);
        if(f0*f1>0){
         
            printf("Wrong choices!\n");
            printf("Again Enter the values of x0 and x1:");
            scanf("%f %f",&x0,&x1);
        }else{
             if(f0*f2<0)
                {
                    x1=x2;
                }
                else
                {
                    x0=x2;
                }
                i++;
                printf("S.N.: %d \t X0: %0.3f \t X1: %0.3f \t X2: %0.3f \t F(X0): %0.3f \t F(X1): %0.3f \t F(X2): %0.3f \n",i,x0,x1,x2,f0,f1,f2);

        }
       
    }while(fabs(f2)>e);
        printf("\nFinal root of equation: %0.3f ",x2);

        return 0;
}