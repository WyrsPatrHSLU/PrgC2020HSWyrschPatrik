#include <stdio.h>
#include <stdlib.h>

long Factorial ( long n )
{
	long result=0;
	if ( n >=1)
	{
		result = n*Factorial(n-1);
	}
	else
	{
		result = 1;
	}
	return result;
}

long Binomial ( long n, long k ) //aufrufen von Factorial?
{
	long result=0;
	if ( n >= k && k >= 1)
	{
		result = Factorial(n) / (Factorial(k) * Factorial (n-k));
	}
	else
	{
		printf("Invalid \n");
	}
	
	
	return result;
}


int main (int argc, char* argv[])
{

	long input1 = atoi(argv[1]);
	long input2 = atoi(argv[2]);
	long result =0;
	result = Binomial(input1, input2);
	printf("Zahl %ld tief %ld is %ld \n", input1, input2, result);
	return 0;
}
