#include<stdio.h>

int main(){
    int age;
    float salary;
    printf("Enter your age;\n");
    scanf("%d",&age);
    if(age>=18){
        printf("you are 18+\n");
        printf("What is your salary?\n");
        scanf("%f",&salary);
        if (salary>=30000)
        {
            printf("You can take creadet card from us which amount is 200000.");
        }
        else if (salary>20000)
        {
            printf("You can take creadet card from us which amount is 100000.");
        }
    }
    else
    {
        printf("Your age is less then 18.");
    }
    
    return 0;
}