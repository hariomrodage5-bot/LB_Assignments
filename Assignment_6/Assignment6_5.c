#include<stdio.h>

void TableRev(int iNo)
{
    int  iAns = 0;
    int iCnt = 10;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iCnt != 1)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
        iCnt--;

    }

}
int main()
{
    int iValue =0;
    printf("Enter number :");
    scanf("%d",&iValue);

    TableRev(iValue);


    return 0;
}
