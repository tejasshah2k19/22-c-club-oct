#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter three numbers ");
    scanf("%d%d%d", &a, &b, &c); // 1 2 3 , 3 2 1

    // if(a > b && a > c){
    //     printf("\nA is max");
    // }
    // if(b > a && b > c){
    //     printf("\nnB is max");
    // }

    // if(c > a && c > b){
    //     printf("\nC is max");
    // }
    // if(a == b && b == c){
    //     printf("\nAll Are Equals");
    // }

    //    if( a > b ){
    //         if(a > c ){
    //             printf("\nA is max ");
    //         }else{
    //             printf("\nC is max");
    //         }
    //     }else{
    //         if(b > c){
    //             printf("\nB is max");
    //         }else{
    //             printf("\nC is max");
    //         }
    //     }

    if (a > b && a > c)
    {
        printf("\nA is max");
    }
    else if (b > a && b > c)
    {
        printf("\nB is Max");
    }
    else if (c > a && c > b)
    {
        printf("\nC is max");
    }
    else
    {
        printf("\nAll Are Equals");
    }

    return 0;
}