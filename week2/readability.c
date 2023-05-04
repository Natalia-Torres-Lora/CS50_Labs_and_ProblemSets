#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
//initiate the functions
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //Get text input
    string text = get_string("Word: ");
    //calling functions
    int numl = count_letters(text);
    int numw = count_words(text);
    int nums = count_sentences(text);
    //calculating the index
    float index = 0.0588 * (((float)numl / (float)numw) * 100) - (0.296 * (((float)nums / (float)numw) * 100)) - 15.80;
    //printing out put of grade
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}
//function for counting the letters
int count_letters(string text)
{
    int count = 0;

    for (int i = 0, n = strlen(text); i < n ; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;

}
//function for counting words
int count_words(string text)
{
    int count = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]) || i == n - 1)
        {
            count++;
        }
    }
    return count;
}
//function for counting sentences
int count_sentences(string text)
{
    int count = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}