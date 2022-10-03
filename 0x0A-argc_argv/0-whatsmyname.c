#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int t;
	printf("argc = %d\n", argc);
	
	for(t = 0; t < argc; t++)
	{
		printf("argv[%d] = %s\n", t, argv[t]);
	}

	return 0;
}	
