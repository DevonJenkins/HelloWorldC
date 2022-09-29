#include <stdio.h>

int main(int argc, char *argv[])
{
	char * filename = argv[1];
	FILE *new_file = fopen(filename, "w");
	fclose(new_file);
}
