/*Accept character character from user ,if character is small display reverse of alphabets ,
and if it it is character is capital display its alphabets series  

*/
#include<stdio.h>
void Display(char ch)
{
    int iCnt = 0;
    if((ch>=65)&&(ch<=90))
    {
        for(iCnt=ch;iCnt<=90;iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if((ch >=97)&&(ch<=122))
    {
        for(iCnt=122;iCnt>=ch;iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    
    

    
}
int main()
{
    char cValue = '\0';
    printf("Enter character :\n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}