#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0;

BOOL checkVowel(char cChar)
{
    if(cChar == 'a'||cChar == 'e'||cChar == 'i'||cChar == 'o'||cChar == 'u'||cChar == 'A'||cChar == 'E'||cChar == 'I'||cChar == 'O'||cChar== 'U')
    {
        printf("It is a vowel\n");
        return TRUE;
       
    }
    else
    {
        printf("It is not a vowel"); 
        return FALSE;
        
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :");
    scanf("%c",&cValue);

    bRet = checkVowel(cValue);

    return 0;

}