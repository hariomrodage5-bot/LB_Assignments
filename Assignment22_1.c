//Accept a number from user and display the below pattern input : 5 = output : A B C D E

#include<stdio.h>
void pattern (int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;

    }

}
int main ()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iValue);

    pattern(iValue);
    return 0;
}