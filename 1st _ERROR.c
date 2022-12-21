#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float t,ap;
    printf("Enter the true and approx value: ");
    scanf("%f%f",&t,&ap);
    float abse=fabs(t-ap);
    float rel=fabs(abse/t);
    float pre=rel*100;
  printf("The absolute error is %f The relative error is %f The precentage error is %f",abse,rel,pre);
}
