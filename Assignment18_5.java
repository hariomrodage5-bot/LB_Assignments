//write a program to check whether a number is positive ,negative,zero
class Logic
{
    void checkSign(int num)
    { 
        if(num > 0)
        {
            System.out.println("Number is positive");
        }
        else if(num ==0)
        {
             System.out.println("Number is Zero");
        }
        else
        {
            if(num < 0)
            {
                System.out.println("Number is Negative");
            }
        }
        


    } 
}
class Assignment18_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkSign(-8);
    }
}