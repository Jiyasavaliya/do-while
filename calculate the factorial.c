#include<stdio.h>
int main() {

 int a=1,n,sum=1;
 
 printf("enter the value : ");
	scanf("%d",&n);
 
 do{
sum*=a;
a++; 	
}
 while(a<=n);
printf("%d",sum); 	
}


