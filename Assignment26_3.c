/*Accept a number of rows and columns and display the below pattern 
input : 4 4 
output : 
$       *       *       *
*       $       *       *
*       *       $       *
*       *       *       $
  
*/
#include<stdio.h>
void pattern(int irow,int iCol)
{
    int iCnt,jCnt = 0;
    for(iCnt = 1;iCnt<= irow;iCnt++)
    {
        for(jCnt = 1;jCnt <= iCol;jCnt++)
        { 
            if(iCnt==jCnt)
            {
                printf("$\t");
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
    int iValue1,iValue2 = 0;

    printf("Enter the number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of rows :\n");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);
    return 0;

}