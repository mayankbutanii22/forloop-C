#include<stdio.h>
main()
{
	int a,N;
	int table;
	printf("Enter any number: ");
	scanf("%d\n",&N);
	
	
  for (int a=1; a<=10; a++) {
  	
    printf("%d * %d = %d \n", N,a, N*a);
  }
}