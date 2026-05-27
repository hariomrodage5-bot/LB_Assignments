#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven(int iNo)
{
    if(iNo % 2 ==0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is not even number ");
    }
}
int main()
{

    int iValue = 0;
    BOOL bRet = FALSE; 
    
    printf("Enter number");
    scanf("%d",&iValue);

    bRet = chkEven(iValue);
    return 0;
}