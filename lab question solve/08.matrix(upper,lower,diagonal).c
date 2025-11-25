#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    int n;scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }printf("\n");
    //upper triangular
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i <= j)printf("%d ",arr[i][j]);
            else printf("%d ",0);
        }printf("\n");
    }printf("\n");
    //lower triangular
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i >= j)printf("%d ",arr[i][j]);
            else printf("%d ",0);
        }printf("\n");
    }printf("\n");
    //diagonal
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j)printf("%d ",arr[i][j]);
            else printf("%d ",0);
        }printf("\n");
    }printf("\n");
    
    return 0;
}