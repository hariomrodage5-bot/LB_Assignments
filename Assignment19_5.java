//write a program to calculate the power of number using loops
class Logic
{
    void calculatePower(int base,int exp)
    {
        
        int iCnt = 0;
        int iAns = 1;
        for(iCnt = 1;iCnt <= exp;iCnt++)
        {

           iAns = iAns * base;

            System.out.println(iAns);
        }
    }
  
   
}

class Assignment19_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic ();
        lobj.calculatePower(2,5);
    }
}