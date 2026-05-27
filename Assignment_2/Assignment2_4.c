#include<stdio.h>

int Display(int iNo , int iFreaquency)
{
   int iCnt = 0;
   if(iNo <=0)
   {
        iNo = -iNo;
   }

   for(iCnt = 1; iCnt <= iFreaquency; iCnt++)
   {
        printf("%d", iNo );
   }

}


int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    printf("Enter Frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;

}