//Accept character from user and check whether it is capital or not (A - Z)
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkCapital(char ch)
{
    if((ch >=65)&&(ch <= 97))
    {
        return TRUE;
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

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = chkCapital(cValue);

    if(bRet==TRUE)
    {
        printf("it is capital character\n");
    }
    else
    {
        printf("it is not capital character\n");
    }



    return 0;
}