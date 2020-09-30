#include <stdio.h>

int main (int argc, char* argv[])
{
	short largeShort = 32760;
	printf("before: %d ", largeShort);
	largeShort = largeShort + 12345;
	printf("after: %d \n\n", largeShort);

	int numerator = 19, denominator =5, result =0;
	printf("before: num %d, den %d, res %d \n", numerator, denominator, result);
	result = numerator/denominator;
	printf("before: num %d, den %d, res %d \n\n", numerator, denominator, result);

	float e = 2.718281828f;
	printf("before: %f \n", e);
	e++;
	printf("after++: %f \n", e);
	e--;
	printf("after--: %f \n\n", e);
	
	
	return 0;
}
