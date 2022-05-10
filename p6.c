#include<stdio.h>


void make_copy_of_string(char str[], char str_copy[]);
void keep_chars(char string[]);
void make_lower(char string[]);
_Bool isPalindrome(char string[]);

int main (void) {

    char phrase[101], phrase_copy[101];


    printf("Ender Phrase: ");
    fgets(phrase, 101, stdin);


    make_copy_of_string(phrase, phrase_copy);
    keep_chars(phrase_copy);
    make_lower(phrase_copy);

    if (isPalindrome(phrase_copy) == 1){


        
    }


}