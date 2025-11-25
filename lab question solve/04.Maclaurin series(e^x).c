#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
double factorial(int n){
    if(n == 0)return 1;
    if(n == 1)return 1;
    return n*factorial(n-1);
}
int main(){
    double x,term,sum = 0;
    scanf("%lf",&x);
    for (int i = 0; i < 6; i++)
    {
        term = pow(x,i) / factorial(i);
        sum += term;
    }
    printf("%.6lf",sum);
    return 0;
}