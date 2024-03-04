#include<stdio.h>
int main(){
    char name[25];
    int age;
    printf("What is your name?\n");
    scanf("%s",&name);
    printf("Your name is %s\n",name);
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is %d", age);
    return 0;
}