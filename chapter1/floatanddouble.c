#include <stdio.h>

int main(){

    // float
    // double
    // long double

    // fixed point 
    // float point representation

    flaot var1 = 3.14159;
    double var2 = 3.1411111111111;
    long double var3 = 3.34444444444444;

    printf("%d\n" , sizeof(float));
    printf("%d\n" , sizeof(double));
    printf("%d\n" , sizeof(long double));
    printf("%.2f\n" , var1);
    printf("%.16f\n" , var2 );
    printf("%21Lf\n" , var3);


    int var4 = 4/9;
    printf("%d\n" , var4);

    float var5 = 4.0/9.0;
    printf("%.2f\n" , var5 );

    float var6 = 4.0/9.0;
    printf("%.2f\n" , var6 );

}

// precision
// double , long double => more precision
// float => less precision 



