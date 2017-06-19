#include<stdio.h>
int square(int a)
{
    int result;
    result=a*a;
    printf("\nResult: %d",result);
}
int addition(int b)
{
	int resultforad;
	resultforad=b+b;
	printf("\nResult: %d",resultforad);
}
int main()
{
	int choice;
	printf("Please make choice for your operation: \n 1:Square \n 2:Addition \n Choice:");
	scanf("%d",&choice);
switch(choice)
{
	case 1:
	int x;
	printf("Enter the number for square : ");
	scanf("%d",&x);
	x=square(x);
	break;


    case 2:
	int y;
	printf("Enter the number for Addition: ");
	scanf("%d",&y);
	y=addition(y);
	break;
default:printf("Please choice one thing");
}

	getchar();
	getchar();
	return 0;
}

