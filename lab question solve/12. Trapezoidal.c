#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    int n;
    double h = 0.01, sum = 0;
    scanf("%d",&n);
    double x[n], y[n];
    for (int i = 0; i < n; i++){
        scanf("%lf",&x[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%lf",&y[i]);
    }
    // sum 1 to n-1
    for (int i = 1; i < n-1; i++){
        sum += y[i];
    }
    double ans = (h/2)* (y[0] + y[n-1] + 2*sum);
    printf("%.6lf",ans);
    return 0;
}