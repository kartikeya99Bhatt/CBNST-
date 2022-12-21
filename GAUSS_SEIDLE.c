#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f1(float y,float z)
{
   // return ((15-y-z)/10);
   //return((85-6*y+z)*1.0/27);
   return((44-2*z-1*y)/10);
}
float f2(float x,float z)
{
   // return ((24-x-z)/10);
   //return((72-6*x-2*z)*1.0/15);
   return((51-z*1-x*2)/10);
}
float f3(float x,float y)
{
   // return ((33-x-y)/10);
  // return((110-x-y)*1.0/54);
   return((61-y*2-x*1)/10);
}
int main()
{
    printf("The equation are : ");
    float x0=0,y0=0,z0=0,x1=0,y1=0,z1=0,ex=0,ey=0,ez=0;int cit=1;
    float er;
    printf("Enter the error:");
    scanf("%f",&er);
    do
    {
        x1=f1(y0,z0);
        y1=f2(x1,z0);
        z1=f3(x1,y1);
        
        printf("\n %d iteration The value of %f , %f , %f ",cit,x1,y1,z1);
        ex=fabs(x1-x0);
        ey=fabs(y1-y0);
        ez=fabs(z1-z0);
       
        cit++;
        //set the value
        x0=x1;
        y0=y1;
        z0=z1;
    }while(ex>er && ey>er && ez>er);
    
    return 0;
}
