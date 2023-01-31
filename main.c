
#include<stdio.h>
#include<conio.h>

int main()
{
	 int number;
	 clrscr();
	 printf("Enter number: ");
	 scanf("%d", &number);
	
	 if(number==0)
	 {
	  	printf("%d is ZERO.", number);
	 }
	 else if(number>0)
	 {
	  	printf("%d is POSITIVE.", number);
	 }
	 else
	 {
	  	printf("%d is NEGATIVE.", number);
	 }
	 getch();
	 return(0);
}
