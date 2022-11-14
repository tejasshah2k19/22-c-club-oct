#include<stdio.h>

int main(int argc, char const *argv[])
{
    int e_age = 18; 
    int p_age;
    int num = -10;
    printf("\nEnter age");
    scanf("%d",&p_age); 

    //condition ? true : false 
     p_age >= 18 ?  printf("You ARe ELI..."):printf("You Are not ELi.."); 

    num > 0 ? printf("\nNum +") : num < 0  ? printf("\nNum - ") :  printf("\nNum 0"); 

    return 0;
}

//take number from user and check its postive or negative 
