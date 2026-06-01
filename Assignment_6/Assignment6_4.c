#include<stdio.h>

void Table(int iNo)
{
    int  iAns = 0;
    int iCnt = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iCnt <= 10)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
        iCnt++;

    }

}
int main()
{
    int iValue =0;
    printf("Enter number :");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}
