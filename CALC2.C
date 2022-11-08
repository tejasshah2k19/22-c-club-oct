#include<stdio.h>
#include<conio.h>


	/*
			Date : 31-oct-2022
			Author : Tejas shah
			Defination : Calculator using switch case
	*/
void main(){

      float n1,n2,ans;
      char choice;
      clrscr();

      printf("\nPress\n+ for Add\n- For Sub\n* For Mul\n/ For Div");
      printf("\nEnter Your Choice");
      scanf("%c",&choice);

      printf("\nEnter two numbers");
      scanf("%f%f",&n1,&n2);

      switch(choice){
	case '+':
		ans = n1 + n2;
		printf("\nAddition = %.2f",ans);
		break;

	case '-':
		ans = n1 - n2;
		printf("\nSubtraction = %.2f",ans);
		break;

	case '*':
		ans = n1 * n2;
		printf("\nMultiplication = %.2f",ans);
		break;

	case '/':
		ans = n1 / n2;
		printf("\nDivision = %.2f",ans);
		break;

	default :
		printf("\nInvalid Choice PTA");
      }

      getch();

}