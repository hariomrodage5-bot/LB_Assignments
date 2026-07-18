/*Accept number of rows and columns from user and display below pattern
input 5 5
output :
a       b       c       d
1       2       3       4
a       b       c       d
1       2       3       4

*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt ,jCnt = 0;
    
    for(iCnt = 1;iCnt<=iRow;iCnt++)
    {
        char ch = 'a';
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt % 2 != 0)
            {
                printf("%c\t",ch); 
                ch++; 
            }
            else
            {
                printf("%d\t",jCnt);
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