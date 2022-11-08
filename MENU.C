#include<stdio.h>
#include<conio.h>


void main(){
	int choice,qty;

	clrscr();
	printf("\n1 For Vada( Rs 20 )\n2 For Dabeli (Rs 30)\n3 for Pasta (Rs 100)");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	printf("\nEnter qty");
	scanf("%d",&qty);

	switch(choice){
		case 1:
			printf("\nTotal Amount => %d",20*qty);
			break;
		case 2:
			printf("\nTotal Amount => %d",30*qty);
			break;
		case 3:
			printf("\nTotal Amount => %d",100*qty);
			break;
	       default:
			printf("\nInvalid Choice PTA");
	}
	getch();

}