/*Accept a number of rows and columns and display the below pattern 
input : 6 6 
output : 
1       2       3       4       5       6
1       2                               6
1               3                       6
1                       4               6
1                               5       6
1       2       3       4       5       6
  
*/
#include<stdio.h>
void pattern(int irow,int iCol)
{
    int iCnt,jCnt = 0;
    for(iCnt =1;iCnt<=irow;iCnt++)
    {
        for(jCnt = 1;jCnt <= iCol;jCnt++)
        { 
            if(iCnt == jCnt)
            {
                printf("%d\t",jCnt);
            }
            else if(iCnt ==1||iCnt==irow)
            {
                printf("%d\t",jCnt);
            }
            else if(jCnt==1||jCnt==iCol)
            {
                 printf("%d\t",jCnt);
            }
            else
            {
                printf(" \t");
            }
         
        }
        printf("\n");   
    }
}
int main()
{
    int iValue1,iValue2 = 0;

    printf("Enter the number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of rows :\n");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);
    return 0;

}