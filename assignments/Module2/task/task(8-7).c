// Write a menu-driven C program to calculate the total bill amount for a food order.
// Display a menu of food items, 
// allow the user to enter the item choice and quantity, 
// Finally, display the total bill amount.





#include <stdio.h>
#include <conio.h>
int main()
{
	printf("\n  Show Menu");
	printf("\n Enter 1 For Pizza");
	printf("\n Enter 2 For Burger");
	printf("\n Enter 3 For Samosa");
	printf("\n Enter 4 For Panipuri");
	printf("\n Enter 5 For Pavbhaji");
	printf("\n Enter 6 For Dosa");
	printf("\n Enter 7 For Idli");
	printf("\n Enter 8 For Sandwich");
	printf("\n Enter 9 For Hot chocalate");
	printf("\n Enter 10 For Coffee");
	printf("\n Enter 0 For Break");

	int Choice;
	int quantity;
	int amount=0;

	

	for(Choice=1; Choice<=10; Choice++)
	{
	    printf("\n Enter Your Choice");
	    scanf("%d",&Choice);
	    
	    if(Choice==0)
	    {
	        break;
	    }
	    printf("Enter quantity");
	    scanf("%d",&quantity);

		if(Choice==1)
		{
			amount+=quantity*100;//pizza amount
		}
		if(Choice==2)
		{
			amount+=quantity*50;//Burger amount
		}
		if(Choice==3)
		{
			amount+=quantity*30;//Samosa amount
		}
		if(Choice==4)
		{
			amount+=quantity*40;//Panipuri amount
		}
		if(Choice==5)
		{
			amount+=quantity*90;//Pavbhaji amount
		}
		if(Choice==6)
		{
			amount+=quantity*150;//Dosa amount
		}
		if(Choice==7)
		{
			amount+=quantity*120;//Idli amount
		}
		if(Choice==8)
		{
			amount+=quantity*180;//Sandwich amount
		}
		if(Choice==9)
		{
			amount+=quantity*130;//Hot chocalate amount
		}
		if(Choice==10)
		{
			amount+=quantity*20;//Coffee amount
		
		}
		
		 




	}
		printf("\n Bill Amount is %d",amount);

	return 0;
}