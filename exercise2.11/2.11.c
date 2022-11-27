#include <stdio.h>

main()
{   int n ,t = 9;
	int sum = 0;
	printf("input num :"); //input num to enter the condition.
	scanf( "%d", &n ); // keep value at n.
	for ( int i = 1; i <= n; i++ ) // condition check.
	{ 
		sum = sum + t; // sum with t.
	  	printf("%d ",t); // display t because it will show how valuable it is.
        if (i <= n - 1){
            printf(" + ");
        } //display + between t
	  	t=t*10+9; // because it will increase the value sum next.
	}
	printf("\nSum = %d ",sum); // display sum.
	return 0;
}
