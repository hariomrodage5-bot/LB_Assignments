/*Accept a number from user and display the pattern
input  : 4  4
output :
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt , jCnt = 0;
    char ch = '\0';
    
    for(iCnt = 1;iCnt <= iRow;iCnt++)
    {
        for(jCnt =1,ch = 'A';jCnt<=iCol;jCnt++)
        {
            printf("%c\t",ch);
            ch++;
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