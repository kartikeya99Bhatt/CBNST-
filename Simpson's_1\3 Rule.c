#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (1/(1+x*x));
}
int main ()
{
    float a ,b;
    printf("Enter the value of a and b: ");
    scanf("%f%f",&a,&b);
    int n;
    printf("Enter the number of interval: ");
    scanf("%d",&n);
    float h=(b-a)/n;
    float sum=0.0;
    sum=f(a)+f(b);
    int idx=1;
    for(float j=a+h;j<b;j=j+h,idx++)
    {
        if(idx%2==0)
        {
            sum+=f(j)*2;
        }
        else
        {
            sum+=f(j)*4;
        }
    }
    sum=(sum*h)/3;
    printf("The sum is : %f ",sum);
    return 0;
}
