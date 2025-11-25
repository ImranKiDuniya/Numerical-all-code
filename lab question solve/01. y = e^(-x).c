#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){
    double y;
    for (double x = 0.1; x <= 2.0; x += 0.1)
    {
        y = exp(-x);
        printf("%.1lf    %.6lf\n",x,y);
    }
    
    return 0;
}