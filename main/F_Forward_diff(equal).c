
#include <stdio.h>

int main() {
    int n, i, j;
    double x[20], y[20][20], value, h, u, sum;
    
    scanf("%d", &n); // data points
    
    for (i = 0; i < n; i++)
        scanf("%lf", &x[i]); // x values
    
    for (i = 0; i < n; i++)
        scanf("%lf", &y[i][0]); // y values
    
    // Calculate forward differences
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = y[i+1][j-1] - y[i][j-1];
        }
    }
    
    printf("\nForward Difference Table:\n");
    for (i = 0; i < n; i++) {
        printf("%lf", x[i]);
        for (j = 0; j < n - i; j++) {
            printf("\t%lf", y[i][j]);
        }
        printf("\n");
    }
        scanf("%lf", &value); // interpolated value
    
    h = x[1] - x[0];
    u = (value - x[0]) / h;
    
    sum = y[0][0];
    double term = 1;
    for (j = 1; j < n; j++) {
        term *= (u - (j - 1));
        sum += (term * y[0][j]) / (double)tgamma(j + 1); // factorial via gamma
    }
    
    printf("\nInterpolated value at %.3lf = %.6lf\n", value, sum);
    
    return 0;
}
