//write aq program display the garade of student based on marks  
class Logic
{
   void DisplayGrade(int marks)
   {
    if(marks >= 90)
    {
        System.out.println("A");
    }
    else if((marks < 90) &&(marks > 75) )
    {
        System.out.println("B");
    }
    else if((marks < 75 )&&(marks >= 35))
    {
         System.out.println("C");
    }
    else
    {
        System.out.println("FAIL");
    }

   }
}

class Assignment19_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic ();
        lobj.DisplayGrade(82);
    }
}