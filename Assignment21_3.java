//write a program to display all factors of given numbers 
import java.util.*;
class Logic
{
    void DisplayFactors(int num)
    {
        int iCnt = 1;
        while(iCnt<=num)
        {
           if((num / 2) % iCnt == 0)
           {
                System.out.println(iCnt);
           }
           iCnt++;
        }
        
    }
   
}

class Assignment21_3
{
    public static void main(String A[])
    {
        int iValue = 0;
        Logic lobj = new Logic();
        lobj.DisplayFactors(12);

    }
}