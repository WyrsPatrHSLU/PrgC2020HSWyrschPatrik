#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
	int value1 = 0,  value2 = 0,  value3 = 0;
	int smallestValue = 0, largestValue = 0;
	//make sure we have exactly 3 arguments
	if( argc != 4)
	{
		//usage message
		printf("usage: logicOPerators val1 val2 val3\n");
	}
	else
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		value3 = atoi(argv[3]);
		
		printf("Value1 %d, Value2 %d, Value3 %d\n", value1, value2, value3);
		
		if (value1<0 || value2<0 || value3<0)
		{
			printf("The entered values are not all positive. Exiting.");
		}
		else
		{	//smallest Value
			if ( value1<value2 && value1<value3)
				smallestValue = value1;
			
			if ( value2<value1 && value2<value3)
				smallestValue = value2;
			
			if ( value3<value1 && value3<value2)
				smallestValue = value3;
			
			//largest Value
			if ( value1>value2 && value1>value3)
			largestValue = value1;
			
			if ( value2>value1 && value2>value3)
				largestValue = value2;

			if ( value3>value1 && value3>value2)
				largestValue = value3;
			
			printf("The smallest of entered values is: %d\n", smallestValue);
			printf("The largest of entered values is: %d\n", largestValue);
		}
	}
		return 0;
}		
