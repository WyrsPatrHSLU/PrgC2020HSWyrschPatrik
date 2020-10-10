#include <stdio.h>

typedef enum {
	MAIN_MENU = 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	BINOMIAL,
	BINAER,
	EXIT = 99
} MenuItem;


// function declarations
MenuItem PrintMainMenu( void );
long int ComputeCubic( long int x );


int main( int argc, char* argv[] )
{

	MenuItem menuSelected = MAIN_MENU;
	int run = 1;
	long int input = 0;	
	while(run)
	{
		switch(menuSelected){
			case MAIN_MENU:
				menuSelected = PrintMainMenu();
				break;
	
			case NUMSTAT:
				// get user input:
				
				printf("executing NumStat\n");
				menuSelected = MAIN_MENU;
				break;

			case CUBIC:
				printf("Enter a 'long int' number: ");
				scanf("%ld", &input);
				printf("%ld cubed is %ld\n\n", input, ComputeCubic(input));
				menuSelected = MAIN_MENU;
				break;
			
			case FACTORIAL:
				printf("executing Factorial\n");
				menuSelected = MAIN_MENU;
				break;
				
			case BINOMIAL:
				printf("executing Binomial\n");
				menuSelected = MAIN_MENU;
				break;
				
			case BINAER:
				printf("executing Binärkonverter\n");
				menuSelected = MAIN_MENU;
				break;	

			case EXIT:	
				run = 0;
				break;

			default:		
				printf("invalid menu selection\n");
				break;
		}
	}

 	return 0;
}


// function implementations:
MenuItem PrintMainMenu( void )
{
	MenuItem selection = MAIN_MENU;
	printf("***********************************\n");
	printf("Main Menu\n");
	printf("***********************************\n\n");
	printf("Select from the following options:\n");
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Cubic\n", CUBIC);
	printf("%d - Factorial\n", FACTORIAL);
	printf("%d - Bionomial\n", BINOMIAL);
	printf("%d - Binärkonverter\n", BINAER);
	printf("%d - Exit\n", EXIT);
	printf("--> ");
	scanf("%d", (int*)&selection);
	return selection;
}	


long int ComputeCubic( long int x ){
	return x*x*x;
}


