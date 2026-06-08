#include<stdio.h>
#include<stdlib.h>
void DigitSum (int Arr[],int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
   
    int iNo = 0;
   for(iCnt = 0;iCnt < iSize;iCnt++)
   {
        int iSum  = 0;
        iNo = Arr[iCnt];
        while (iNo > 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
            
        }
        printf("%d : %d\n",Arr[iCnt],iSum);
        
   }
  
     
   
}   
int main()
{
    int iLength =0;
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
    DigitSum(p,iLength);
   

    
   
    return 0;



    return 0;
    free(p);
} 