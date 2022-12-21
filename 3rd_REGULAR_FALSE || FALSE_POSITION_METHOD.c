// let the equation be :  x^3-5x+1=0
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x)
{
    return(x*x*x-5*x+1);
}
int main()
{
    printf("The Equation is : x^3-5x+1=0 ");
    
    float a,b;
    while(1)
    {
        printf("Enter the root of eq : \n");
        scanf("%f%f",&a,&b);
        if(f(a)*f(b)<0)
        {
            printf("The root lie b/w %f and %f \n",a,b);
            break;
        }
        else
        {
            printf("The root entered ae invalid \n");
        }
    }
    float tol;
    printf("Enter the tolerance : ");
    scanf("%f",&tol);
    
    int cit=1;
    while(1)
    {
        float x=(a*f(b)-b*f(a))/(f(b)-f(a));
        
        if(fabs(f(x))<tol)
        {
           printf("%d Iteration value of x is %f the value of f(%f) : %f\n",cit,x,x,f(x));
           printf("The root is : %f ",x);
            break;
        }
        printf("%d Iteration value of x is %f the value of f(%f) : %f\n",cit,x,x,f(x));
        if(f(a)*f(x)<0)
        {
           b=x; 
        }
        else
        {
            a=x;
        }
        cit++;
    }
}
