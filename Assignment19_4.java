//write a program print each digit of number separately
class Logic
{
   void checkDivisible(int num)
   {
        int iNo = num;
        int iCnt = 0;

      
        while(iNo > 0)
        {
            int iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }

 

   }
}

class Assignment19_4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic ();
        lobj.checkDivisible(125487);
    }
}