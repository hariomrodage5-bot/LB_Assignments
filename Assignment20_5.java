//write a program to find smallest  digit in number  

class Logic
{
    
    void findSmallestDigit(int num)
    {
     
      int iDigit = num % 10;
      int iMin = iDigit;
        
        
        while(num > 0)
        {
            iDigit = num % 10;
              
            if( iDigit < iMin )
            {
                iMin = iDigit;
            }
            num = num / 10;

        } 
        System.out.println(iMin);       
    }
}
class Assignment20_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findSmallestDigit(83429);
    }
}