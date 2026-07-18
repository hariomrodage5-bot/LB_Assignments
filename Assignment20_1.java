//Write the program to find the sum of all even numbers up to n

class Logic
{
    void SumEvenNumbers(int num)
    {
        int iCnt = 0;
        int iSumEven = 0;
         System.out.println("Sumation of even number is :");
        for(iCnt = 0;iCnt <= num;iCnt++)
        {
            if(iCnt %2 ==0)
            {
                iSumEven = iSumEven+iCnt;

            }
           
        }
         System.out.println(iSumEven);
    }

}
class Assignment20_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumEvenNumbers(10);


    }
}