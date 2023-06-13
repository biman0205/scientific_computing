#include<stdio.h>
 int main()
{
    float x[20],y[20],h,del1,del2,del3,del4,f(float,float);
    int i,n;
    printf("\n Enter x(0),y(0),h,n\n");
    scanf("%f,%f,%f,%d",&x[0],&y[0],&h,&n);
    printf("\n x   y   ");
    for(i=0;i<=n-1;i++)
    {
        x[i+1]=x[i]+h;
        del1=h*f(x[i],y[i]);
        del2=h*f(x[i]+h/2.0,y[i]+del1/2.0);
        del3=h*f(x[i]+h/2.0+h/2.0,y[i]+del2/2.0);
        del4=h*f(x[i]+h,y[i]+del3);
        y[i+1]=y[i]+1.0/6.0*(del1+2*del2+2*del3+del4);
        printf("\n  %f  %f",x[i+1],y[i+1]);
    }
}
float f(float a,float b)
{
    float c;
    c=0.5*(1.0+a)*b*b;
    return(c);
}
