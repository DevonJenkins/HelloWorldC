#include <cs50.h>
#include <stdio.h>
//1. prompt for input. use get_int to grab a num that is < 9
int main()
{
    int n;
    do
    {
        n = get_int("height: " );
    }
    while (n > 8);

    //for each row
    for(int i = 0; i < n; i++)
    {


        //for each column
        for(int j = 0; j < n; j++)
        {

            if(j < n - j)
            {
                printf("0");
            }
        }
        //print left hashes


        //print gap
        //print right hashes
        printf("\n");
    }


}
