#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = iEnd;
    while(iCnt >= iStart)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
   
}
int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;
    

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    
    return 0;
  
}