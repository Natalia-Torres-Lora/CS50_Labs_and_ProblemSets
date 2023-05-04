#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Input Name
    string name = get_string("What's your name? ");
    //print Name
    printf("Hello, %s!\n", name);
}