#include<stdio.h>
#include<math.h>
#define f(x) x*exp(2*x)
int main()
{
 float lower, upper, integration=0.0, stepSize, k;
 int i, subinterval;
 printf("Enter lower limit of integration:\t");
 scanf("%f", &lower);
 printf("Enter upper limit of integration:\t");
 scanf("%f", &upper);
 printf("Enter number of sub intervals:\t");
 scanf("%d", &subinterval);
 stepSize = (upper - lower)/subinterval;
 integration = f(lower) + f(upper);
 for(i=1; i<= subinterval-1; i++)
 {
  k = lower + i*stepSize;
  if(i%2==0)
  {
   integration = integration + 2 * f(k);
  }
  else
  {
   integration = integration + 4 * f(k);
  }
 }
 integration = integration * stepSize/3;
 printf("\nRequired value of integration is: %.3f", integration);
 return 0;
}