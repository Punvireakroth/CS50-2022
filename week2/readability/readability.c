#include <cs50.h>
#include <stdio.h>
#include <string.h>

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
    printf("%d\n", letter);
    int word = count_words(text);
    printf("%d\n", word);
    int sentence = count_sentences(text);
    printf("%d\n", sentence);

}

// count letter function
int count_letters(string text)
{

   for(int i = 0; i<= strlen(text); i++)
   {
    if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
    {
        amount_of_letter++;
    }
   }
   return amount_of_letter;
}

// count amount of word
int count_words(string text)
{
    for(int j = 0; j <= strlen(text); j++)
    {
        if(text[j] == ' ')
        {
            amount_of_word++;
        }
    }
    return amount_of_word;
}


// count sentence
int count_sentences(string text)
{
    for(int k=0; k<=strlen(text); k++)
    {
        else if(text[k] == '.' || text[k] == '!' || text[k] == '?')
        {
            amount_of_sentence++;
        }
    }
    return amount_of_sentence;
}