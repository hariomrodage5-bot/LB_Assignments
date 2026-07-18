/*Accept a number from user and display below pattern
input : 8
output : 2       4       6       8       10      12      14      16
*/
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 0;
    
  
    for(iCnt = 1;iCnt <=iNo*2;iCnt++)
    {
        if(iCnt % 2 ==0)
        {
            printf("%d\t",iCnt); 
        }
     

    }
}
int main()
{
     int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);
    pattern(iValue);

    return 0;
}