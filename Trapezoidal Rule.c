#include<stdio.h>
#include<math.h>
float f(float x)
{
   // return(x*x*x);
   return (1/(1+x*x));
}
int main()
{
    float a,b;
    printf("Enter the value of a and b: ");
    scanf("%f%f",&a,&b);
    int n;
    printf("Enter the number of interval");
    scanf("%d",&n);
    
    float h=(b-a)/n;
    float sum=f(a)+f(b);
    for(float i=a+h;i<b;i=i+h)
    {
        sum=sum+2*f(i);
    }
    sum=sum*h/2;
    printf("%f",sum);
    return 0;
}
