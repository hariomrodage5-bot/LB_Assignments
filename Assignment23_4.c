/*Accept a number from user and display the pattern
input  3 4
output :

*       #       *       #
*       #       *       #
*       #       *       #
*       #       *       #

*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt ,jCnt = 0;
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(jCnt % 2 ==0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
            
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