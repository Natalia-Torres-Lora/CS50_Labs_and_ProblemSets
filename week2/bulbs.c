#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;
int counter = 0;

void print_bulb(int bit);

int main(void)
{

    // Getting user input string
    string text = get_string("Message: ");
    int binary[BITS_IN_BYTE];

    // Converting each letter to decimal number
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        int decimal = (int) text[i];
        int index = BITS_IN_BYTE - 1;

        // Converting decimal to binary
        while (decimal > 0)
        {
            binary[index--] = decimal % 2;
            decimal /= 2;
        }

        // Filling the rest of the array with zeros
        while (index >= 0)
        {
            binary[index--] = 0;
        }

        // Printing binary representation
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            print_bulb(binary[j]);
        }
        printf("\n");
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
