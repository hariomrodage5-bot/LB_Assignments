class Logic
{
    void CheckPalindrome(int inum)
    {
        int num = inum;
        int temp = inum;
        int reverse = 0;
        
        while(num > 0)
        {
            int iDigit = num % 10;
            reverse = reverse * 10 + iDigit;
            num = num / 10;
           
        }
        if(temp==reverse)
        {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("Number is not palindrome");
        }
    }

}
class Assignment17_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(121);


    }
}