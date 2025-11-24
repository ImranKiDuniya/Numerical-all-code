#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#define e 0.001
double g(double x)
{
    return cbrt(1 - x*x);
}
int main(){
    // solving (x^3 + x*x - 1 = 0)
    double x0, x1;   int i = 0;
    scanf("%lf", &x0); // input initial guess
    do
    {
        x1 = g(x0);
        i++;
        printf("Iteration %d: x = %.6lf\n", i,x1);
        if(fabs(x1 - x0) < e) break;
        x0 = x1;
    } while (1);
    printf("Approximate root: %.6lf",x1);       
    return 0;
}
