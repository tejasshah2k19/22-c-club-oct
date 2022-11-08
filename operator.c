#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a=40,b=20,c=30,d=30,e=50,ans;

    printf("\n a / b =  %d ",a/b);
    printf("\n a % b =  %d ",a%b);

    ans = a > b ;
    printf("\n a > b => %d",ans); //true = 1
    printf("\n a < b => %d",a<b);// false = 0 
    
    printf("\n a == b => %d",a==b);//0
    printf("\n c == d => %d",c==d);//1 
    printf("\n a != b => %d",a!=b);//1

    ans = (a > b) && (a > c) ; // true -> 1 true &&  true  
    printf("\n a>b && a>c => %d",ans);

    ans = (a > b) && (a > e) ; // true &&  false => false   
    printf("\n a>b && a>e => %d",ans);

    ans = (a > b) || (a > c) ; // true -> 1 true ||   true  
    printf("\n a > b || a>c => %d",ans);

    ans = (a > b) || (a > e) ; // true ||  false => true    
    printf("\n a>b || a>e => %d",ans);

    ans = !(a > b);//1 =>  0
    printf("\n !(a>b) => %d ",ans);     

    return 0;
}
