// for equation 3x=cosx+1 => 3x-cosx-1 =>3+sinx
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x)
{
    return (3*x-cos(x)-1);
}
float d(float x)
{
    return (3+sin(x));
}
int main()
{
    printf("The equation is : 3x-cosx-1 \n");
    float a ,b;
    while(1)
    {
        printf("Enter the value of a and b: ");
        scanf("%f%f",&a,&b);
        if(f(a)*f(b)<1)
        {
            printf("The root lie b/w %f and %f ",a,b);
            printf("Enter the value b/w a and b: ");
            scanf("%f",&a);
            break;
        }
        else{
            printf("The root are invalid \n");
        }
    }
    int cit=1;
    float tol;
    printf("Enter the tolerance : ");
    scanf("%f",&tol);
    while(1)
    {
        float c=a-(f(a)/d(a));
        if(fabs(c-a)<tol)
        {
            printf("\n%d iteration and the value of x is : %f",cit,c);
            printf("\nThe root is %f ",c);
            break;
        }
        printf("\n%d iteration and the value of x is : %f",cit,c);
        a=c;
        cit++;
    }
    
    return 0;
}
