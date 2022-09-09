#include <cs50.h>
#include <stdio.h>
int main()
{
    int n;
    do
    {
			printf("height: ");
			scanf("%d", &n);
    }
    while ((n > 8) || (n < 1));

    //for each row
    for (int i = 0; i < n; i++)
    {
        //print spaces
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }

        //print left hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        //print gaps
        printf("  ");

        //print right hashes
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
