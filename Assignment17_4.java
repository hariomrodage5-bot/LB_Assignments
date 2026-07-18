class Logic
{
    void FindMin(int a,int b,int c)
    {
        if((a < b)&&(a < c))
        {
            System.out.println(a);
        }
        else if ((b<c)&&(b < a))
        {
            System.out.println(b);
        }
        else 
        {
            System.out.println(c);
        }
    }
}
class Assignment17_4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindMin(3,7,2);

    }
}