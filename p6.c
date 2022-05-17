#include<stdio.h>

void make_copy_of_string(char string[], char str_copy[]);
void keep_chars(char string[]);
void make_lower(char string[]);
_Bool isPalindrome(char string[]);


int main (void) {

    char phrase[101], phrase_copy[101];


    printf("Enter Phrase: ");
    fgets(phrase, 101, stdin);


    make_copy_of_string(phrase, phrase_copy);
    make_lower(phrase_copy);
    keep_chars(phrase_copy);
    
    printf("cleaned up: %s \n\n", phrase_copy);

    if (isPalindrome(phrase_copy)){
        printf("You have a palindrome!!\n");
    }
    else{
        printf("You do not have a palindrome :(\n\n");
    }
}


_Bool isPalindrome(char string[])
{
    int i=0, j=0, h;
    
    while(string[i]!='\0'){
        i++;      
    }

    h = i/2;
    i--;

    while(j<h){
        if (string[j]!=string[i]){
            return 0;

        }

        i--;
        j++;

    }

    return 1;
}

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
    int i =0, j=0;


    while(string[i]!='\0')
    {
        if (string[i]>='a' && string[i]<='z')
        {
            string[j]=string[i];
            i++;
            j++;
            
        }
        else {
            i++;

        }
    }

    string[j] = '\0';
    
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
