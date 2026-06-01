#include<stdio.h>

int Factorial(int iNo)
{
    int iRet = 1;
  int   iCnt = 1;
    
    while(iCnt <= iNo)
    {
        iRet = iRet * iCnt;
        iCnt++;  
    }
    return iRet;
}
int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is %d",iRet);
    return 0;
}