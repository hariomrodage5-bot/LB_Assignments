/*Accept number from user and display the below pattern 
input : 5
output : 1 * 2 * 3 * 4 * 5 *
*/
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1;iCnt <=iNo ;iCnt++)
    {
        printf("%d\t*\t",iCnt);
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