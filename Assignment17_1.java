class Logic
{
    void sumofDigits(int num)
    { 
        int iCnt = 0;
        int iSum = 0;

           while(num > 0)
           {
              int  iDigit = num % 10;
             iSum = iSum + iDigit;
               num = num / 10;   
           }
            System.out.println("Addition of number of digits is :"+iSum);
    }
}
class Assignment17_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumofDigits(1234);
    }
}