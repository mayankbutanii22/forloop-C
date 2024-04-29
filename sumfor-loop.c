#include<stdio.h>
main()
{
	int N,a;
	int sum=0;
	printf("Enter any number: ");
	scanf("%d",&N);
	
	
	for(a=1; a<=8; a++){
		
		sum=sum+a;	
	}	printf("The sum of all numbers: %d",sum);

}