//write a program to find largest digit in number  

class Logic
{
    
    void findLargestDigit(int num)
    {
     
        int iMax = 0;
    
        while(num > 0)
        {
            int iDigit = num % 10;

            if( iDigit > iMax )
            {
                iMax = iDigit;
            }
            num = num / 10;

        } 
        System.out.println(iMax);
           
    }


}
class Assignment20_4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findLargestDigit(83429);
    }
}