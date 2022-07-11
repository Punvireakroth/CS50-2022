#include <cs50.h>
#include <stdio.h>
#include <string.h>


// Function prototype
int count_letters(string text);
int main(void)
{
    string text = get_string("Text: ");
    int letter = count_letters(text);
    printf("%d\n", letter);

}

// count letter function
int count_letters(string text)
{
    int amount_of_letter = 0;
    int amount_of_word = 1;
    int amount_of_sentence = 0;
   for(int i = 0; i<= strlen(text); i++)
   {
    if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
    {
        amount_of_letter++;
    }
   }
   return amount_of_letter;
}
