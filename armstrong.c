#include<stdio.h>
int main(){
	int num,remainder,num1,sum;
	printf("enter any three digit number");
	scanf("%d",&num);
	sum=0;
	num=num1;
	while(num>0)
    {  
       remainder=num%10;
       sum=sum+(remainder*remainder*remainder);
       num=num/10;
		}	
	if(num1=sum)
	{  
	printf("number is armstrong");
	}
	else
	{ 
	printf("the number is not armstrong");
	}
	
	
	
	
	
	
}
