#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
    int iCnt = 0;
    int  iMin = Arr[0];
    
    for(iCnt = 0;iCnt < iSize;iCnt++)  
    {
        
        if(Arr[iCnt] < iMin)
        {
           iMin = Arr[iCnt];
        }    
    }
    return iMin;   
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
   
    iRet = Maximum(p,iLength);
    printf("Maximum element are  %d",iRet );

    return 0;
} 