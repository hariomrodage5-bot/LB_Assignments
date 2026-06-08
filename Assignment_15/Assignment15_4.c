#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt = 0;
     printf("elements between range are :\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)  
    {
        if((Arr[iCnt] >= iStart)&&(Arr[iCnt] <= iEnd))
        {
            printf("%d\n",Arr[iCnt]);

        }
    }    
}
int main()
{
    int iLength =0;
    int iValue1 =0;
    int iValue2 = 0;
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
    printf("Range start from : \n");
    scanf("%d",&iValue1);

    printf("Range end : \n");
    scanf("%d",&iValue2);

    Range(p,iLength,iValue1,iValue2);

    return 0;
} 