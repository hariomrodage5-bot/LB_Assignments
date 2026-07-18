/*Accept a number from user and display the pattern
input  : 4  4
output :
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt , jCnt = 0;

    
    for(iCnt = 1;iCnt <= iRow;iCnt++)
    {
        char ch = 'a';
        char CH = 'A';
        for(jCnt =1;jCnt<=iCol;jCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%c\t",CH);
                CH++;
                
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 =0;
    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns :\n");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);


    return 0;

}