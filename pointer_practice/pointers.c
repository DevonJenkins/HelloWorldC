#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	FILE *input = fopen("hi.txt", "r");
	if (input == NULL)
	{
		printf("Could not open file\n");
		return 1;
	}
	char buffer[3];
	fread(buffer, 1, 3, input);
	for (int i = 0; i < 3; i++)
	{
		printf("%c", buffer[i]);
	}
	printf("\n");
}
