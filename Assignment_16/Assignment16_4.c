#include<stdio.h>
#include<stdlib.h>
int Digits(int Arr[],int iSize)
{
    int iCnt = 0;
    int iAns = 0;
    printf("Three digits number are :\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)  
    {
        if((Arr[iCnt] >= 100)&&(Arr[iCnt] < 1000))
        {
            printf("%d\t",Arr[iCnt]);            
        }   
        else
        {
            printf("There is no three digit number");
            break;
        }
    }
   
   
   
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
    iRet = Digits(p,iLength);
    
   
        return 0;



    return 0;
    free(p);
} 