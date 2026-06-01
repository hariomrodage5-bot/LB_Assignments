#include<stdio.h>

int iCountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit >= 3)&&(iDigit <= 7))
        {
            iCnt++;
        }
        iNo = iNo/10;
        
     
    }
    return iCnt;
}
int main ()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter nuber : \n");
    scanf("%d",&iValue);

    iRet = iCountRange(iValue);
    printf("numbers in range 3 to 7 is :%d",iRet);



    return 0;

}