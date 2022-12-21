#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void display(int n,float arr[n][n+1])
{
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
          printf("%.2f ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the number of row int matrix: \n");
    scanf("%d",&n);
    float arr[n][n+1];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
          scanf("%f",&arr[i][j]);
        }
    }
   // Identity  matrix
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(i!=j)
           {
               float ratio=arr[j][i]/arr[i][i];
               for(int k=0;k<=n;k++)
               {
                   arr[j][k]=arr[j][k]-(ratio*arr[i][k]);
               }
           }
           
       }
   }
   display(n,arr);
   // substituting
   float x[n];
   for(int i=0;i<n;i++){
       x[i]=arr[i][n];
   }
  
   for(int i=0;i<n;i++){
       
       x[i]/=arr[i][i];
   }
   // print
   for(int i=0;i<n;i++){
       printf("%f\n",x[i]);
   }
    return 0;
}
