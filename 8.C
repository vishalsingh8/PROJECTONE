#include<stdio.h>
int main(){
    char operater;
    printf("Enter operater:\n");
    scanf("%c", &operater);

    double num1,num2,result;
    printf("Enter the numbers:\n");
    scanf("%lf %lf",&num1,&num2);

    switch (operater)
    {
    case '+':
        result=num1+num2;
        printf("%0.2lf",result);
        break;
    case '-':
        result=num1-num2;
        printf("%0.2lf",result);
        break;
    case '*':
        result=num1*num2;
        printf("%0.2lf",result);
        break;
    case '/':
        result=num1/num2;
        printf("%0.2lf",result);
        break;
    default:
        printf("no input");
        break;
    }

    return 0;
}