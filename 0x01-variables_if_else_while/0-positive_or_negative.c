#include <stdlib.h>
signs a random number every time
~*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%i is positive", n);
	else if(n < 0)
		printf("%i is negative", n);
	else
		printf("%i is zero", n);
	
	return (0);
}
