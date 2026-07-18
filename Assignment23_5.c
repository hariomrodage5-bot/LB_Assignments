/*Accept a number from user and display the pattern
input  3 4
output :

1       1       1       1
2       2       2       2
3       3       3       3
4       4       4       4

*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt ,jCnt = 0;
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            printf("%d\t",iCnt);
            
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