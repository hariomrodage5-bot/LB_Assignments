#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iSize)
{
    int iCnt = 0;
    int  iMin = Arr[0];
    int iMax = Arr[0];
    
    for(iCnt = 0;iCnt < iSize;iCnt++)  
    {
        
        if(Arr[iCnt] < iMin)
        {
           iMin = Arr[iCnt];
        }
        else if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }    
    }
    return iMax - iMin;   
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
   
    iRet = Difference(p,iLength);
    printf("Difference is : %d",iRet );

    return 0;
} 