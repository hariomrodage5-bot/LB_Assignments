#include<stdio.h>
int DollarTOINR(int iNo)
{
   int OneDollar = 70;
   int iAns = 0;
   
   iAns = OneDollar*iNo;
   return iAns;

}


int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter number of USD :");
    scanf("%d",&iValue);

    iRet = DollarTOINR(iValue);
    printf("Value od INR is %d",iRet);

    return 0;
}