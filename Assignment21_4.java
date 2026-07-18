//write a program to count total number of factors of given number
import java.util.*;
class Logic
{
    void countFactors(int num)
    {
        int iCnt = 1;
        int iCount = 0;
        while(iCnt<=num)
        {
           if((num / 2) % iCnt == 0)
           {
               
                iCount++;
           }
            iCnt++;
          
        }
        System.out.println("Total number of factors is : "+iCount);        
    }   
}
class Assignment21_4
{
    public static void main(String A[])
    {
        int iValue = 0;
        Logic lobj = new Logic();
        lobj.countFactors(12);

    }
}