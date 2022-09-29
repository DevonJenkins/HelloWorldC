#include <stdio.h>
#include <stdint.h>

int main (void)
{
	FILE *input = fopen("test.pdf","r");
	if (input == NULL)
	{
	
		printf("couldn't open file\n");
		return 1;
	}

	uint8_t buffer[4];
	//u: unsigned 
	//unsigned : can only store positive integers
	//int: integer
	//8: 8 bits
	fread(buffer, sizeof(uint8_t), 4, input);
	for (int i = 0; i < 4; i++)
	{
		printf("%i\n", buffer[i]);
	}
	printf("\n");
	
}

