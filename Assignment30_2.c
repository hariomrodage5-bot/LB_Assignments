/*Accept character character from user ,if character isCapital display its correspondance capital chatacter,
and if it it is character is small display its correspondance character 
in other cases display as it is 
*/
#include<stdio.h>
void Display(char ch)
{
    
    if((ch >=65)&&(ch <=90))
    {
        ch = ch+32;
    }
    else if((ch >=97)&&(ch<=122))
    {
        ch = ch - 32;
    }
    printf("Correspondance of this character is : %c",ch);
    
}
int main()
{
    char cValue = '\0';
    printf("Enter character :\n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}