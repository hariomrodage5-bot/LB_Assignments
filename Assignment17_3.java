class Logic
{
    void FindMax(int a,int b)
    {
        if(a > b)
        {
            System.out.println(a);
        }
        else
        {
            System.out.println(b);
        }
    }
}
class Assignment17_3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindMax(20,15);

    }
}