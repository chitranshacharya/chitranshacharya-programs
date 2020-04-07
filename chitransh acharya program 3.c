#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	switch (x)
	{
		case 1: printf(" Food Item-Pasta \n Rs 179");
		break;
		case 2: printf("Food Item-French Fries \n Rs 99");
		break;
		case 3: printf("Food Item-Burger \n Rs 129");
		break;	
		case 4: printf("Food Item-Pizza \n Rs 239");
		break;
		case 5: printf("Food Item-Sandwich \n Rs 149");
		break;
		default: printf("invalid");
	}
}
