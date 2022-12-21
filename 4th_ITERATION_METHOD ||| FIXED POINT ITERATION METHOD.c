    // For Equation cosx-3x+1;
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
float g(float x)
{
    return((cos(x)+1)/3);
}
float d(float x)
{
    return(-sin(x)/3);
}
int main()
{
  printf("The Equation is : cosx-3x+1 \n");
  float a;
    while(1)
    {
       printf("Enter the value of a: ");
       scanf("%f",&a);
       
       if(d(a)<1){
           printf("The root exit for %f ",a);
           break;
       }
       else{
           printf("wrong input entered \n");
       }
    }
  
  float tol;
  printf("Enter the tolerance :");
  scanf("%f",&tol);
  
  int cit=1;
  while(1)
  {
      if(fabs(g(a)-a)<tol)
      { 
        printf("%d Iteration the value x is %f \n",cit,g(a));
        printf(" The root of x is %f ",g(a));
        break;  
      }
     printf("%d Iteration the value x is %f \n",cit,g(a));
     a=g(a); 
     cit++;
  }
  
    return 0;
}
