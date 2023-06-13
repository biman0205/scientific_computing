#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,k;
    float a[10][10]={0.0},x[10];
    float pivot=0.0;
    float factor=0.0;
    float sum=0.0;
    printf("Solution by simple Gauss elimination\n\n");
    printf("how many elements of the equation");
    scanf("%d",&n);
    printf("%d",n);
    printf("\n\t input coefficients a[i,j+1],row-wise\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
        scanf("%f",&a[i][j]);
    }
    }
    printf("\n\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1;j++)
        {
            printf("\t%10.0f",a[i][j]);
        }
        printf("\n\n");
    }
    for(k=1;k<=n;k++);
    {
        if(a[k][k]==0.0)
        {
            printf("error");
        }
        else{
            pivot=a[k][k];
            for(j=k;j<=n+1;j++)
            a[k][j]=a[k][j]/pivot;
            for(i=k+1;i<=n;i++)
            {
                factor=a[i][k];
                for(j=k;j<=n+1;j++)
                {
                    a[i][j]=a[i][j]-factor*a[k][j];
                }
            }
        }
        if(a[n][n]==0)
        printf("error");
        else{
            x[n]=a[n][n+1]/a[n][n];
            for(i=n-1;i>=1;i--)
            {
                sum=0.0;
                for(j=i+1;j<=n;j++)
                sum=sum+a[i][j]*x[j];
                x[i]=(a[i][n+1]-sum)/a[i][i];
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("\n\tx[%1d]=%10.4f",i,x[i]);
    }
    system("PAUSE");
    return 0;
}