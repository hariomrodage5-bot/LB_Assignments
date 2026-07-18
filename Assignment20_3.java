//write a program to check whether number is perfect or not 

class Logic
{
    
    void checkPerfect(int num)
    {
        int iCnt = 0;
        int iSum = 0;
    
        for(iCnt = 1;iCnt < num;iCnt++)
        {
            if(num % iCnt==0)
            {
                iSum = iSum+iCnt;
            }
        }
        if(iSum == num)
        {
            System.out.println("perfect number ");
        }
        else
        {
            System.out.println("NUmber is not perfect");
        }
    }


}
class Assignment20_3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkPerfect(10);
    }
}