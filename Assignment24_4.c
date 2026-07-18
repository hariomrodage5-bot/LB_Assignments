/*Accept a number from user and display the pattern
input  : 4  4
output :
4       4       4       4
3       3       3       3
2       2       2       2
1       1       1       1
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int iCnt , jCnt = 0; 
    for(iCnt = iRow;iCnt >= 1;iCnt--)
    {  
        for(jCnt =iCol;jCnt>=1;jCnt--)
        {
           printf("%d\t",iCnt);
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