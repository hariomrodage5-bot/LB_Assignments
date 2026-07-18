/*Accept number of rows and columns from user and display below pattern
input : 4 4
output :
1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7

*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt ,jCnt = 0,iNo=1,iNo1 = 0;
    for(iCnt = 1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iNo <=9)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            else
            {
                iNo1++;
                printf("%d\t",iNo1);
           
            }
           
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns :\n");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}