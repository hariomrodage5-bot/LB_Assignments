/*
Accept  character from user and check whether it is special symbol or not
*/
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkSpecial(char ch)
{
    if((ch>=33)&&(ch<=47)||(ch>=58)&&(ch<=64)||(ch>=91)&&(ch<=96)||(ch>=123)&&(ch<=126))
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
    BOOL bRet = FALSE ;
    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = chkSpecial(cValue);
    if(bRet == TRUE)
    {
        printf("it is a special symbol\n");
    }
    else 
    {
        printf("it is not special symbol\n");
    }

    return 0;
}