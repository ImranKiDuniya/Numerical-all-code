#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    int n;
    double h = 0.2, sum = 0;
    scanf("%d",&n);
    double x[n], y[n];
    for (int i = 0; i < n; i++){
        scanf("%lf",&x[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%lf",&y[i]);
    }
    sum += y[0] + y[n-1];
    for (int i = 1; i < n-1; i++){
        if(i%2 == 0)sum += 2*y[i];
        else sum += 4*y[i];
    }
    double ans = (h/3)*sum;
    printf("%.6lf",ans);
    return 0;
}