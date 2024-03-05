#include<stdio.h>

void happy(){
    printf("Happy Birthday\n");
}

int main(){
    int age,i=1;
    printf("Enter your age:\n");
    scanf("%d",&age);
    if(age>18){
    for ( i; i <= age; i++)
    {
        happy();
    }
    }
    else{
    happy();}
    return 0;
}