#include<stdio.h>
#include<conio.h>

			/*
				Author : Tejas Shah
				Date : 11-Oct-2022
				Defination : Addition of Two numbers

				variable :-
					data name
					which hold a value
				data type:-
					 what type of value can be store in variable
			*/

void main(){
	int x,y,ans;//whole numbers -> %d
	clrscr();

	x = 10;
	y = 20;
	ans = x + y ;//30

	printf("\nAddition = %d",ans);
	printf("\n %d + %d = %d",x,y,ans);//10 + 20 = 30
	getch();

}