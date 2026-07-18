// Write a program to print all even numbefr up to N
class Logic
{
    void printEvenNumners(int n)
    {
        int iCnt = 0;
        System.out.println("Even numbers are :\n");
        for(iCnt = 1;iCnt <= n;iCnt++)
        {
            if((iCnt % 2)==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
class Assignment18_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printEvenNumners(20);
    }
}