#include<stdio.h>
int main(){
    const float PI = 3.14;
    float radius,area;
    printf("Enter redius of the circle:\n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area of the circle is %0.3f", area);
    return 0;
}