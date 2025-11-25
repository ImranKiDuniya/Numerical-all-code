#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#define e 0.001
#define max 100
double f(double x){
    return x*x*x - 2*x - 5;
}
double f_prime(double x){
    return 3*x*x - 2;
}
void bisection(double a, double b){
    double c;
    int iter = 0;
    if(f(a)*f(b) >= 0){
        printf("root not in range\n");
        return;
    }
    while (iter < max){
        c = (a+b)/2;
        if(fabs(f(c)) < e) break;
        if(f(a)*f(b) < 0) b = c;
        else a = c;
        iter++;
    }
    printf("Bisection Root: %.6lf\n",c);
}
void false_position(double a, double b){
    double c;
    int iter = 0;
    if(f(a)*f(b) >= 0){
        printf("root not in range\n");
        return;
    }
    while (iter < max){
        c = (a*f(b) - b*f(a))/(f(b) - f(a));
        if(fabs(f(c)) < e) break;
        if(f(a)*f(b) < 0) b = c;
        else a = c;
        iter++;
    }
    printf("Flase_position Root: %.6lf\n",c);
}
void newton_rapson(){
    double x0 = 2.5, x1;
    int iter = 0;
    while (iter < max){
        double fx = f(x0);
        double fpx = f_prime(x0);
        if(fabs(fpx) < e){
            printf("Derivative too small\n");
            return;
        }
        x1 = x0 - (fx / fpx);
        if(fabs(x1 - x0) < e)break;
        x0 = x1;
        iter++;
    }
    printf("Newton_Rapson Root: %.6lf\n",x1);
}
int main(){
    double a,b; 
    scanf("%lf%lf",&a,&b); // initial guess
    bisection(a,b);
    false_position(a,b);
    newton_rapson();
    return 0;
}