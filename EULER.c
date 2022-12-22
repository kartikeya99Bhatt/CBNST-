#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x,float y){
    return (y*y-x*x);
}
int main()
{
    printf("The equation is : y^2+x^2 \n");
    float x,y,xf;
    printf("Enter the value of x ,y and xf at what value we need y : ");
    scanf("%f%f%f",&x,&y,&xf);
    
    int n;
    printf("Enter the number of iteration : ");
    scanf("%d",&n);
    
    float h=(xf-x)/n;
    printf("The value of h %f:",h);
    float fa;int i=0;
    while(i++<n)
    {
        fa=y+h*f(x,y);
        y=fa;
        printf("\n%f  %f",x,y);
        x=x+h;
    }
    return  0;
}
