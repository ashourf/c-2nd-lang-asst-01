#include <stdlib.h>
#include <stdio.h>
int main()
{
        static int buffersize = 2048;	
	static char buffer[2048];
	printf("Enter a string\n");
	fgets (buffer, buffersize, stdin);
	printf("word: %s", buffer);
	
	
	
}
