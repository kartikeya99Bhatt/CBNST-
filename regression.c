#include<stdio.h>
int main()
{  int n,ch;
   float sx=0.0,sy=0.0,sxy=0.0,sx2=0.0,sy2=0.0;
   printf("\nEnter the no. of points: ");
   scanf("%d",&n);
   printf("\n");
   float x[n],y[n];
   for(int i=0;i<n;i++)
   {
        printf("Enter the value of x%d & y%d: ",i+1,i+1);
        scanf("%f %f",&x[i],&y[i]);
        sx+=x[i];
        sy+=y[i];
   }
   for(int i=0;i<n;i++)
   {  sxy+=x[i]*y[i];
      sx2+=x[i]*x[i];
      sy2+=y[i]*y[i];
   }

    float X,Y,b,c;
    X=sx/n;
    Y=sy/n;
    printf("\nSum of x: %.2f\nSum of y: %.2f\nSum of xy: %.2f\nSum of x^2: %.2f",sx,sy,sxy,sx2);
    printf("\nMean of x : %.2f\nMean of y: %.2f",X,Y);
    
        b=(n*sxy-sx*sy)/(n*sx2-sx*sx);
        c=Y-b*X;
        printf("\n\nRegression coefficient of y on x : %.2f\n",b);
        printf("Regression line of y on x :y=%.2fx+ %.2f\n\n",b,c);


    return 0;
}
