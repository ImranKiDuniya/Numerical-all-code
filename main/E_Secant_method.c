#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#define e 0.001
double f(double x)
{
    return x*x*x - x - 2;
}
int main(){
    // solving (x^3 - x -2 = 0)
    double x0, x1, x2, f0, f1, f2; int i = 0;
    scanf("%lf%lf", &x0, &x1); // input initial two approximations
    do
    {
        f0 = f(x0); f1 = f(x1); 
        if(f1 - f0 == 0) {printf("invalid"); return 1;}
        x2 = x1 - (f1 * (x1 - x0) / (f1 - f0));
        f2 = f(x2);
        i++;
        printf("Iteration %d: x = %.6lf, f(x) = %.6lf\n", i,x2,f2);
        x0 = x1; x1 = x2;
    } while (fabs(f2) > e);
    printf("Approximate root: %.6lf",x2);       
    return 0;
}
// Secant method is open root finding method. Initially two approximations of the function starts with x0 & x1 . Then, create secant line between them, and extracted the intersection point with the x-axis .
// x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0)) 