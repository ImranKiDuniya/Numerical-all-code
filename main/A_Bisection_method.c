#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#define e 0.001
double f(double x)
{
    return x*x*x - x - 1;
}
int main(){
    // solving ( x^3 - x - 2 = 0 )
    double a,b,c;
    scanf("%lf%lf", &a, &b); // input a & b
    int i = 0;
    if(f(a)*f(b) > 0) { printf("invalid input"); return 1; }
    do
    {
        c = (a+b)/2;
        i++;
        printf("iteration %d: c = %.6lf, f(c) = %.6lf\n", i,c,f(c));
        if(f(a)*f(c) < 0) {b = c;}
        else {a = c; }
    }while (fabs(f(c)) > e);

    return 0;
}
// Bisection method is a simple and reliable root finding technique.
// it works, when f(a).f(b) < 0 