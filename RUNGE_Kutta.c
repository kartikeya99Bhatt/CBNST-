#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    return(y+x);
}
int main ()
{
    float x,y,xf;
    printf("Enter the value of x and y and the value of x for u need y for it : ");
    scanf("%f%f%f",&x,&y,&xf);
    int n;
    printf("Enter the number of iteration : ");
    scanf("%d",&n);
    float h=(xf-x)/n;
    printf("The value of h is %f : \n",h);
    float k1,k2,k3,k4,k;
     printf("k1   k2    k3     k4   y");
    for(int i=0;i<n;i++)
    {
        k1=h*f(x,y);
        k2=h*f(x+h/2,y+k1/2);
        k3=h*f(x+h/2,y+k2/2);
        k4=h*f(x+h,y+k3);
        k=(k1+2*k2+2*k3+k4)/6;
        y=y+k;
        x=x+h;
        printf("\n%f %f %f %f %f ",k1,k2,k3,k4,y);
        
    }
    printf("\n The value of y is : %f",y);
    return 0;
} 
