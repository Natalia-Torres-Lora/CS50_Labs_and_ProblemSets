#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int hash = 1;
    //User to input height
    do
    {
        height = get_int("Height: ");
    }
    while (height == 0 || height < 0 || height > 8);
    //make program to creat piramide
    while (height > 0)
    {
        //mamaking the space behore #
        for (int i = 0; i < height - 1; i++)
        {
            printf(" ");
        }
        //for loop for #
        for (int j = 0; j < hash; j++)
        {
            printf("#");
        }
        printf("  ");
        //printing mirror image of the first set of hash characters
        for (int z = 0; z < hash; z++)
        {
            printf("#");
        }
        height = height - 1;
        hash = hash + 1;
        printf("\n");
    }
}