#include<stdio.h>
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iAns = 1;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 0)
        {
            iAns = iAns * iDigit;
          
        }
        iNo = iNo / 10;
            
    }    
    return iAns;
}
int main()
{
    int iRet = 0;

    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("Multiplication of number is : %d\t",iRet);

    return 0;
}