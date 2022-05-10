#include<stdio.h>


void make_copy_of_string(char string[], char str_copy[])
{
    int i=0;
    while(string[i]!='\n' && string[i]!='\0')
    {
        str_copy[i] = string[i];
        i++;
    }
    str_copy[i] = '\0';
    string[i]='\0';
}

void keep_chars(char string[])
{
    int i =0;
    _Bool isLetter = 0;

    while(string[i]!='0')
    {
        if (string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z')
        {
            
        }
        else {
            
        }




    
    }
}

void make_lower(char string[])
{
    int i;
    for(i=0; string[i]!='\0'; i++)
    {
    if(string[i]>='A' && string[i]<='Z')
        {
            string[i] = string[i] + 32;
        }
    }
}
_Bool isPalindrome(char string[]);

int main (void) {

    char phrase[101], phrase_copy[101];


    printf("Ender Phrase: ");
    fgets(phrase, 101, stdin);


    make_copy_of_string(phrase, phrase_copy);
    keep_chars(phrase_copy);
    make_lower(phrase_copy);
    printf("lowered: %s", phrase_copy);

}

