#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void display(int n,float arr[n][n+1])
{
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
          printf("%f ",arr[i][j]);
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
   // upper triangular matrix
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           float ratio=arr[j][i]/arr[i][i];
           for(int k=0;k<n+1;k++)
           {
               arr[j][k]-=ratio*arr[i][k];
           }
       }
   }
   display(n,arr);
   float x[n];
   
   // subtitution
   for(int i=0;i<n;i++)
        x[i]=arr[i][n];
        
    x[n-1]=arr[n-1][n]/arr[n-1][n-1];
   
    
       for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            x[i]-=arr[i][j]*x[j];
        }
        x[i]/=arr[i][i];
    }
   // print
   for(int i=0;i<n;i++){
       printf("%f ",x[i]);
   }
    return 0;
}
