//write a program to calculate the product of digits of number
class Logic
{
    void productsofDigits(int num)
    {
        int iProduct = 1;
        int iCnt = 0;
        while(num > 0)
        {
            int iDigit = num % 10;
            num = num / 10;
            iProduct = iProduct * iDigit; 
            

        }
        System.out.println(iProduct);
        

    }


}
class Assignment21_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.productsofDigits(234);

    }
}