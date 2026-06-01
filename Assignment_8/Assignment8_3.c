#include<stdio.h>
int KMtoMeter(int iNo)
{
    int oneKM = 1000;
    int iAns =0;
    iAns = iNo * oneKM;
    return iAns;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the kilometer : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("The conversion of KM to meter is : %d\n",iRet);

    return 0;
}