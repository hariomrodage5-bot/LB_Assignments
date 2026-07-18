/*Accept a division of student from user and depends on the division display exam timing there are four division in school A B C D 
, Exam of division A at 7 am,B At 8.30Am,C at 9.20am and D at 10.30Am (Application should be case sensitive)
*/
#include<stdio.h>
void chkDivision(char ch)
{
    if((ch>=97)&&(ch<=122))
{
    printf(" please Enter a capital character\n");
}
    else if(ch=='A')
    {
        printf("your exam time will be 7 AM");
    }
    else if(ch=='B')
    {
        printf("your exam time will be 8:30 AM");
    }
    else if(ch=='C')
    {
        printf("your exam time will be 9:20 AM");
    }
    else if(ch=='D')
    {
        printf("your exam time will be 10 AM");
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter your division :\n");
    scanf("%c",&cValue);
    chkDivision(cValue);
    
    return 0;
}