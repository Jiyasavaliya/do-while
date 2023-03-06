#include<stdio.h>
int main()
{
    int a = 2, number;
    
    printf(" Please Enter the Value : ");
    scanf("%i", &number);
    
    printf(" even numbr list  : \n", number);
    
    for(a=2; a<=number; a=a+2)  {
	printf(" %d",a);
      
	}
             
}
