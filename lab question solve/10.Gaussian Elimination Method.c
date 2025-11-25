#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    double a[3][3], b[3], x[3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%lf",&a[i][j]); // input a
        }
    }
    for (int i = 0; i < 3; i++){
        scanf("%lf",&b[i]); // input b
    }
    // forward elimination
    for (int i = 0; i < 2; i++){
        for (int j = i+1; j < 3; j++){
            double factor = a[j][i] / a[i][i];
            for (int k = i; k < 3; k++){
                a[j][k] -= factor* a[i][k];
            }
            b[j] -= factor* b[i];
        }
    }
    // backword substitution
    for (int i = 2; i >= 0; i--){
        x[i] = b[i];
        for (int j = i+1; j < 3; j++){
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }
    // solution
    for (int i = 0; i < 3; i++){
        printf("%.2lf   ",x[i]);
    }
    
    return 0;
}