/*Accept a number of rows and columns and display the below pattern 
input : 4 4 
output : 
1       2       3       4
        2       3       4
                3       4
                        4
  
*/
#include<stdio.h>
void pattern(int irow,int iCol)
{
    int iCnt,jCnt = 0;
    for(iCnt = 1;iCnt<= irow;iCnt++)
    {
        for(jCnt = 1;jCnt <= iCol;jCnt++)
        { 
            if(iCnt == jCnt||jCnt>=iCnt)
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