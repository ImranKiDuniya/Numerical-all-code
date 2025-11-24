#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#define e 0.001
double f(double x)
{
    return x*x*x - 2*x - 5;
}
int main(){
    // solving (x^3 - x - 2 = 0)
    double a,b,c;
    scanf("%lf%lf", &a,&b); // initial guess 
    if(f(a)*f(b) >= 0) {printf("Invelid guess"); return 1;}
    printf("Iter\ta\tb\tc\tf(c)\n");
    int i = 0;
    do
    {
        c = (a* f(b) - b*f(a))/(f(b) - f(a));
        printf("%d %.6lf %.6lf %.6lf %.6lf\n",i+1,a,b,c,f(c));
        if(fabs(f(c)) < e) break; // converge check
        if(f(a)*f(c) < 0) b = c;
        else a = c;
        i++;
    } while (i < 100);
    printf("Approx: %0.6lf", c);
    return 0;
}
// c = (a* f(b) - b*f(a))/(f(b) - f(a))