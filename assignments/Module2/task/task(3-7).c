
// swap two variables without using third variable

#include <stdio.h>
#include <conio.h>
void main(){
    
    int a;
    int b;
    
    printf("Enter the value of a :-");
    scanf("%d",&a);
    printf("Enter the value of b :-");
    scanf("%d",&b);
    
    printf("\n Before the Swapping value");
    printf(" a= %d",a);
    printf(" b=%d",b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\n After the Swapping value");
    printf(" a = %d",a);
    printf(" b =%d",b);
    
    
    getch();
}