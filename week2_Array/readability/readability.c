/* Pun VireakRoth
*  7/13/2022
*  At e2STEM Education Cambodia
*  For CS50x
*/


#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h> // Use in (round)

int amount_of_letter = 0;
int amount_of_word = 1;
int amount_of_sentence = 0;
// Function prototype
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);





int main(void)
{
    string text = get_string("Text: ");
    int letter = count_letters(text);

    int word = count_words(text);

    int sentence = count_sentences(text);

    // Evaluate and print message to the users
    float index = 0.0588 * (100 * (float) letter / (float) word) - 0.296 * (100 * (float) sentence / (float) word) - 15.8;
    if (index < 16
        && index >=
        0) // L is for average number of letters per 100 words in the text // S is the average number of sentences per 100 words in the text.
    {
        printf("Grade %i\n", (int) round(index));
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

}

// count letter function
int count_letters(string text)
{

    for (int i = 0; i <= strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            amount_of_letter++;
        }

    }
    return amount_of_letter;
}

// count amount of word
int count_words(string text)
{
    for (int j = 0; j <= strlen(text); j++)
    {
        if (text[j] == ' ')
        {
            amount_of_word++;
        }
    }
    return amount_of_word;
}


// count sentence
int count_sentences(string text)
{
    for (int k = 0; k <= strlen(text); k++)
    {
        if (text[k] == '.' || text[k] == '!' || text[k] == '?')
        {
            amount_of_sentence++;
        }
    }
    return amount_of_sentence;
}