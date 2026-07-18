/*Accept a number from user and display the pattern
input  : 4  4
output :
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
     int iCnt , jCnt = 0;
      int iNo = 1;
    for(iCnt = 1;iCnt <=iRow;iCnt++)
    {  
        
        for(jCnt =1;jCnt<=iCol;jCnt++)
        {
           printf("%d\t",iNo);
           iNo++;
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