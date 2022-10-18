#include<stdio.h>
#include<conio.h>

void main(){

	//int  a,b,ans;//g.v     %d
	float a,b,ans;        // %f
	clrscr();

	printf("Enter two numbers");
	scanf("%f%f",&a,&b);

	ans = a+b;
	printf("\nAddition = %f",ans);

	ans = a - b;
	printf("\nSub = %f",ans);
	      //float/int => float => store -> ans -> int -> loss
	      //casting -> implicit
	ans = a/b; //5/2 float/float => 2.5     10-5 5  5-10 -5
	printf("\nDiv = %f",ans);

	getch();

}