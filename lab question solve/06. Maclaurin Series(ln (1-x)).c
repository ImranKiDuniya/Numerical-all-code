#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    double x,term, sum = 0;
    scanf("%lf",&x);
    for (int i = 1; i <= 4; i++)
    {
        term = - pow(x,i)/i;
        sum += term;
    }
    printf("%.6lf",sum);
    return 0;
}