#include<stdio.h>

int main(int argc, char const *argv[])
{
    //take a number from user and print it is divisible by 4 or 10 

    int num;
    printf("\nEnter number");
    scanf("%d",&num);

    if(num%4==0){
        printf("\nNum is divided by 4");
    }

    if(num%10 == 0){
        printf("\nNum is divide by 10");
    }
    
    return 0;
}
