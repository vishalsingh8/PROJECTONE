#include<stdio.h>
int main(){
    char grade;
    printf("Enter your grade:\n");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("your grade is A");
        break;
    case 'B':
        printf("your grade is B");
        break;
    case 'C':
        printf("your grade is C");
        break;
    default:
        printf("good");
        break;
    }
    return 0;
}