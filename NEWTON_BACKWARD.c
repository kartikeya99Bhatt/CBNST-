#include<stdio.h>
#include<math.h>
void display(int n,float arr[n][n+1])
{
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++)
        {
            printf("%0.2f ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the no. of row: ");
    scanf("%d",&n);
    float arr[n][n+1];
    for(int i=0;i<n;i++){
        printf("Enter the value of x and y: ");
        scanf("%f%f",&arr[i][0],&arr[i][1]);
    }
    
    for(int j=2;j<=n;j++){
        
        for(int i=0;i<=n-j;i++)
        {
            arr[i][j]= arr[i+1][j-1]- arr[i][j-1];
        }
    }
    printf("\n");
    display(n,arr);
    float x;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    
    float u;
    u=(x-arr[n-1][0])/(arr[1][0]-arr[0][0]);
    float u1=u;
    float fact=1;
    float fa=arr[n-1][1];
    int j=2; // indicating column
    for(int i=n-2;i>=0;i--)
    {
        fa=fa+(u1*arr[i][j])/fact;
        u1=u1*(u+(j-1));
        fact=fact*j;
        j++;
    }
    printf("The value of y is %f ",fa);
    
}
