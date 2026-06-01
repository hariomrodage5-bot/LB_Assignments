#include<stdio.h>
int DisplayRangeSumEven(int iStart,int iEnd)
{
    int iAns = 0;
    int iCnt = 0;
    for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        if(iCnt % 2 ==0)
        {
            iAns = iAns + iCnt;

        }
        

    }
    return iAns;
}
int main()
{
    
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    iRet = DisplayRangeSumEven(iValue1,iValue2);
    printf("Sumation of all number is :%d",iRet );
    return 0;
  
}