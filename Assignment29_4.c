//Accept a character from ud=ser and check e=whether it is character or not 
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkSmall(char ch)
{
    if((ch>=97)&&(ch <=122))
    {
        return TRUE ;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character :\n");
    scanf("%c",&cValue);
    bRet = chkSmall(cValue);
    if(bRet == TRUE)
    {
        printf("it is a small case character  ");

    }
    else 
    {
        printf("it is not a small case character  ");
    }


    return 0;
}