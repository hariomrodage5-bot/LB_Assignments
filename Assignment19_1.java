//write a program to check whether a given uear is leap or not
class Logic
{
    void checkLeapYear(int num)
    {
        if (num % 4 ==0)
        {
            System.out.println("This is a leap year");
        }
        else
        {
            System.out.println("This is not leap year");
        }
    }
}

class Assignment19_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic ();
        lobj.checkLeapYear(2024);
    }
}