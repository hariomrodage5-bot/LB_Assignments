#include <Stdio.H>
void Number(int iNo)
{
    int iCnt =0;
   
    {
        if(iNo < 50)
        {
            printf("Small\n");
        } 
         else if(iNo == 50 && iNo < 100)
        {
            printf("Medium\n");
        }
        else if(iNo > 100)
        {
            printf("Greater ");


        }   
    }
   
    
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;

}