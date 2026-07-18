//Accept a character from ud=ser and check e=whether it is character or not 
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkDigit(char ch)
{
    if((ch>='0')&&(ch <='9'))
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
    bRet = chkDigit(cValue);
    if(bRet == TRUE)
    {
        printf("it is a digit ");

    }
    else 
    {
        printf("it is not a digit ");
    }


    return 0;
}