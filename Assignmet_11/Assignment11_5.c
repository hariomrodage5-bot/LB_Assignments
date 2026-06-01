//write a program which accept number from user and count frequency of less than 6 in it 
//input 202102
//output - 6

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;  

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < 6)
        {
            iCount++;    
        }
        iNo = iNo / 10;
       
    }
    return iCount;
  
}
#include<stdio.h>
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d",iRet);

    return 0;

}