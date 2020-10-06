#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
	double value1 =0, value2;
	
	if( argc != 3)
	{
		//usage message
		printf("min zwei FLiesskommazahlen\n");
	}

	else
	{
	value1 = atof(argv[1]);
	value2 = atof(argv[2]);
	printf("Value1 %f, Value2 %f\n", value1, value2);
	
	double sum = value1 + value2;
	double absdiff = 0;
	if(value1>value2)
			{
			absdiff= value1-value2;
			} 
	else
			{
			absdiff = value2-value1;
			}
	double product = value1 * value2;
	double ratio = value2 / value1;
	printf("Summe: %f\n", sum);
	printf("Absolute Differenz: %f\n", absdiff);
	printf("Produkt: %f\n", product);
	printf("Ratio: %f\n", ratio);
	
	
	}

	return 0;
}
