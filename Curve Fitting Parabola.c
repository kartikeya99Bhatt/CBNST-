#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number of n: ");
    scanf("%d",&n);
    float x[n],y[n];
    float sum1,sum2,sum3,sum4,sum5,sum6,sum7;
    for(int i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
        sum1+=x[i];
        sum2+=y[i];
        sum3+=x[i]*y[i];
        sum4+=x[i]*x[i];
        sum5+=x[i]*x[i]*y[i];
        sum6+=x[i]*x[i]*x[i];
        sum7+=x[i]*x[i]*x[i]*x[i];
    }
    printf("\nThe sum record :\n%f %f %f %f %f %f %f\n",sum1,sum2,sum3,sum4,sum5,sum6,sum7);  
    float arr[3][4];
    arr[0][0]=sum4;
    arr[0][1]=sum1;
    arr[0][2]=n;
    arr[0][3]=sum2;
    
    arr[1][0]=sum6;
    arr[1][1]=sum4;
    arr[1][2]=sum1;
    arr[1][3]=sum3;
    
    arr[2][0]=sum7;
    arr[2][1]=sum6;
    arr[2][2]=sum4;
    arr[2][3]=sum5;
    
    // printing the array
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            printf("%0.4f ",arr[i][j]);
        }
        printf("\n");
    }
    
    // converting the array int upper triangular matrix
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            float ratio=arr[j][i]/arr[i][i];
            for(int k=0;k<=3;k++)
            {
                arr[j][k]=arr[j][k]-ratio*arr[i][k];
            }
            
        }
    }
    
    // printing the upper triangular matrix
     printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            printf("%0.4f ",arr[i][j]);
        }
        printf("\n");
    }
    
    // applying Backward subsitution 
    float xx[3];
    
    xx[2]=arr[2][3]/arr[2][2];
    
    for(int i=1;i>=0;i--)
    {
        float sum =0.0;
        for(int j=2;j>=0;j--)
        {
            sum+=arr[i][j]*xx[j];
        }
        xx[i]=(arr[i][3]-sum)/arr[i][i];
    }
    //printing the equation 
    for(int i=0;i<=2;i++)
    printf("\n%0.2f ",xx[i]);
    return 0;
}
