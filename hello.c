#include <stdio.h>

int main(void)
{
	char str[20];
		printf("Enter your name: ");
		scanf("%[^\n]s", str);
		printf("Hello %s", str);
		printf("\n I hope you are well %s", str);
}
