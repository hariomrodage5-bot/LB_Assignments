/*Accept a number from user and display the pattern
input  : 4  3
output :
5       4       3       2       1
5       4       3       2       1
5       4       3       2       1

*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt ,jCnt = 0;
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=iCol;jCnt>=1;jCnt--)
        {
            printf("%d\t",jCnt);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter the number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    

    return 0;

}