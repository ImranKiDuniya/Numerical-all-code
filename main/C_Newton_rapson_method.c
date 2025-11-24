#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#define max 100
#define e 0.001
double f(double x)
{
    return x*x*x - 2*x - 5;
}
double df(double x)
{
    return 3*x*x - 2;
}
int main(){
    // solving (x^3 - x -2 = 0)
    double x0, x1; int i = 0;
    scanf("%lf", &x0); // initial guess
    do
    {
        if(df(x0) == 0) {printf("Invalid"); return 1; }
        x1 = x0 - (f(x0)/df(x0));
        i++;
        printf("Iteration %d: x = %.6lf, f(x) = %.6lf\n", i, x1, f(x1));
        if(fabs(x1 - x0) < e || i > max) break;
        x0 = x1; 
    } while (1);
    printf("Approximate root: %.6lf", x1);
    return 0;
}
// Newton rapson method is an iterative root finding technique that converge very quickly if the initial guess is good.
// x2 = x1 - (f(x1)/df(x1));