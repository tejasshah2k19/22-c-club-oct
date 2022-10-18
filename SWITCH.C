#include<stdio.h>
#include<conio.h>

/*
		Date  : 18-Oct-2022
		Author: Tejas Shah
		Defination : SwitchCase
*/
void main(){
	//int a,b,ans,choice;
	float a,b,ans;
	int choice;
	clrscr();

	printf("\nEnter two numbers");
	scanf("%f%f",&a,&b);

	printf("\n1 For Add");
	printf("\n2 For Sub");
	printf("\n3 For Mul\n4 For Div\nPlease Enter your Choice");
	scanf("%d",&choice); //address of

	//you can n number of cases
	//you can add cases in any order
	//switch expression must be type of an integer
	//switch expression 1 2 3 4
	//switch expression can be a b c + - *  S A M D

	switch(choice){
	      case 5:
			printf("\nCase 5");
			break;
	      case 1:
			ans = a+b;
			printf("\nAddition = %f",ans);
			break;
	      case 2:
			ans = a-b;
			printf("\nSubtraction = %f",ans);
			break;
	      case 3:
			ans = a*b;
			printf("\nMul = %f",ans);
			break;
	      case 4:
			ans = a/b;
			printf("\nDiv = %f",ans);
			break;
	      default:
			printf("\nInvalid Choice PTA");

	}//switch
	//

	getch();

}//main