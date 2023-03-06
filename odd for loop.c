#include<stdio.h>
int main()
{
    int a = 1, number;
    
    printf(" Please Enter the Value : ");
    scanf("%i", &number);
    
    printf(" odd numbr list  : \n", number);
    
    for(a=1; a<=number; a=a+2)  {
	printf(" %d",a);
      
	}
             
}
