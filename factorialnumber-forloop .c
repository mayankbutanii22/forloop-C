#include<stdio.h>
main()
{
	int a,N;
	int sum=1;
	printf("Enter any number: ");
	scanf("%d",&N);
	
	for(a=1; a<=5; a++){
		
		sum=sum*a;
		printf("The factorial is: %d",sum);	
	}
	printf("The factorial is: %d",sum);
}