#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
   
    
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
      int  iAns = 0;
       iAns = iNo * iCnt;
        printf("%d\t",iAns);
       
       
    }
    

}
int main()
{
    int iRet = 0;
    int iValue = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;

}