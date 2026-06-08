#include<stdio.h>
#include<stdlib.h>
int product(int Arr[],int iSize)
{
    int iCnt = 0;
    int  iMult=1;
    int iFlag =0;
    for(iCnt = 0;iCnt < iSize;iCnt++)  
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMult = iMult * Arr[iCnt];
            iFlag =1;
        }    
    }
    if(iFlag ==0)
    {
        return 0;
    } 
    return iMult;   
}
int main()
{
    int iLength =0;
    int iRet = 0;
    int iCnt = 0;
   
    int *p = NULL;
    
    printf("Enter number of elements :");
    scanf("%d",&iLength);

    p = (int*)malloc(iLength*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter elements :");
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
   
    iRet = product(p,iLength);
    printf("Product of odd elements are %d",iRet );

    return 0;
} 