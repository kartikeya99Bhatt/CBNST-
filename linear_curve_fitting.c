#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    float x[n],y[n];
    float sum1,sum2,sum3,sum4;
    for(int i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
        sum1+=x[i];
        sum2+=y[i];
        sum3+=x[i]*y[i];
        sum4+=x[i]*x[i];
    }
    printf("\n%f %f %f %f\n",sum1,sum2,sum3,sum4);
    float arr[2][3];
   
    arr[0][0]=n;
    arr[0][1]=sum1;
    arr[0][2]=sum2;
    arr[1][0]=sum1;
    arr[1][1]=sum4;
    arr[1][2]=sum3;
   
   float ratio=arr[1][0]/arr[0][0];
   for(int i=0;i<3;i++){
       arr[1][i]= arr[1][i]-(ratio*arr[0][i]);
   }
   // print 
   printf("The upper triangular matrix is : \n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
          printf("%.2f ",arr[i][j]);
        printf("\n");  
    }
   //
   float b=arr[1][2]/arr[1][1];
   float a=(arr[0][2]-(arr[0][1]*b))/(arr[0][0]);
   printf("The euation is: %f + %fx",a,b);
    return 0;
}
