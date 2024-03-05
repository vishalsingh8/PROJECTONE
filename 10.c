#include<stdio.h>
double sqr(double x){
    double result = x*x;
    return result;
}
int main(){
    double square;
    double z=sqr(100);
    printf("%0.2lf",z);

    return 0;
}