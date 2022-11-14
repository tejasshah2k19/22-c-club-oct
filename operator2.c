#include<stdio.h>

int main()
{
    int a = 5,b=6,c=7;
    int p = 5,q=5,r=5,s=5,t;
    int i=10;
    int d=0,k=1;
    // i++;
    //++i;
    //printf("\n i = %d ",i++);//print 10 and then increase by 1 ->  11  
     printf("\n i = %d ",++i);// increase by 1 ->  11 and then print -> 11   
    a = b++ + ++c;
    printf("\na = %d",a);//14  

       //5  + 5   + 6   + 6  + 6 + 6  
    t = p++ + q++ + ++r + r + ++s + s ; 
    printf("\nt = %d ",t);//34  36  38 
    //  1   +  2  +  3  + 4  +  5 
    d = k++ + k++ + k++ + k++ + k++ ; 
    printf("\nd = %d",d);//15
    printf("\nk = %d",k);//6 

    return 0;
}