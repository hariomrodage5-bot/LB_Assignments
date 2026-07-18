//Write a program to find the sum of even and odd digits separately in a number 
class Logic
{
    void SumEvenOddNumbers(int num)
    { 
        int iCnt = 0;
        int iEvenSum = 0;
        int iOddSum = 0;
        int iNo = num;
    
        for(iCnt = 1;iCnt <=num;iCnt++)
        {

            int iDigit = iNo %10;

            if(iDigit % 2 ==0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
           
                iOddSum = iOddSum+iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Even digit sum : "+iEvenSum);
        System.out.println("Odd Digit Sum "+iOddSum);
    }
}
class Assignment18_4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumEvenOddNumbers(36555);
    }
}