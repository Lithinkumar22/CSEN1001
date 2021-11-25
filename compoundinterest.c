#include<stdio.h>
int main(){
	int p,t,r;
	printf("principle=");scanf("%d",&p);
	printf("rate of interest=");scanf("%d",&r);
	printf("time=");scanf("%d",&t);
	printf("compound interest=%d\n",(p*(1+r/100)*t));
}
