//Accept character from user and chexk whether it is aplphabeet or not 
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkAlpha(char ch)
{
    if((ch>=65)&&(ch<=97)||(ch>=97)&&(ch<=122))
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
    bRet = ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf ("it is a character\n");
    }
    else
    {
        printf ("it is not  character\n");
    }

    return 0;
}