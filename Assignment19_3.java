// write a program check whether number is divisible bi 11 and 5 or not
class Logic
{
   void checkDivisible(int num)
   {
    if((num % 5 ==0)&&(num % 11 ==0))
    {
       
        System.out.println("Number is divisible by both numbers ");

    }
    else
    {
         System.out.println("Number is not divisible by both numbers ");

    }
    
   }
}

class Assignment19_3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic ();
        lobj.checkDivisible(55);
    }
}