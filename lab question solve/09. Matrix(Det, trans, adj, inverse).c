#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    double a[3][3];
    double det, adj[3][3],inv[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%lf",&a[i][j]);
        }
    }
    //determinant
    det = a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]) - a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
    printf("Det: %.2lf\n",det);
    // transpose
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%.1lf   ",a[j][i]);
        }printf("\n");
    }printf("\n");
    // adjoint
    adj[0][0] = (a[1][1]*a[2][2] - a[1][2]*a[2][1]);
    adj[0][1] = -(a[1][0]*a[2][2] - a[1][2]*a[2][0]);
    adj[0][2] = (a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    adj[1][0] = -(a[0][1]*a[2][2] - a[0][2]*a[2][1]);
    adj[1][1] = (a[0][0]*a[2][2] - a[0][2]*a[2][0]);
    adj[1][2] = -(a[0][0]*a[2][1] - a[0][1]*a[2][0]);
    adj[2][0] = (a[0][1]*a[1][2] - a[0][2]*a[1][1]);
    adj[2][1] = -(a[0][0]*a[1][2] - a[0][2]*a[1][0]);
    adj[2][2] = (a[0][0]*a[1][1] - a[0][1]*a[1][0]);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%.1lf   ",adj[i][j]);
        }printf("\n");
    }printf("\n");
    //inverse
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            inv[i][j] = adj[i][j]/det;
            printf("%.1lf   ",inv[i][j]);
        }printf("\n");
    }printf("\n");
    return 0;
}