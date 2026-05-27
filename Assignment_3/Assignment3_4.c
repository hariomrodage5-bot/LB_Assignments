#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >='A')&&(cValue <= 'Z'))
    {
        cValue = cValue + 32;
        printf("Converted of charactes is :%c",cValue);
    }
    else if ((cValue >='a')&&(cValue<+'z'))
    {
        cValue = cValue - 32;
        printf("Converted of character is :%c\n",cValue);

    }

}

int main()
{
    char cValue = '\0';

    printf("enter Character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


    return 0;


}