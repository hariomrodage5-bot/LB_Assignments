//write  a program print number from n down into reverse order

class Logic
{
    
    void printReverse(int num)
    {
        int iCnt = 0;
    
        for(iCnt = num;iCnt >=1;iCnt--)
        {
            System.out.println(iCnt);
        }
    }


}
class Assignment20_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printReverse(10);
    }
}