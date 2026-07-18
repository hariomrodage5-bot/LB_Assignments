/*Accept a character from user and display it ascii value in decimzl ,octal and hexadecimal format 
*/
#include<stdio.h>
void DisplayAscii(char ch)
{
    printf("dec\toct\thex\n");
    printf("-------------------\n");
    printf("%d\t%o\t0x%X\t",ch,ch,ch);

}
int main()
{
    char cValue = '\0';
    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayAscii(cValue);


    return 0;
}