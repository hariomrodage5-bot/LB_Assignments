/*
Accept a number from user and display below pattern
input : 4  4
*       *       *       *
*       *       *       *
*       *       *       *
*       *       *       *

*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    for(iCnt = 1;iCnt <= iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);
   
    printf("Enter number of Columns:");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    
    return 0;
}