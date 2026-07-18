//write a program to print all numbers from 1 to n that are divisible by 1 and 3
import java.util.*;
class Logic
{
    void printDivisible2and3(int num)
    {
        int iCnt = 1;
        System.out.println("disisble by 2 and 3 are :");
     
        while(iCnt<=num)
        {
           if((iCnt % 2 == 0)&&(iCnt % 3 == 0))
           {
               
               System.out.println(iCnt);
           }
            iCnt++;
          
        }
              
    }   
}
class Assignment21_5
{
    public static void main(String A[])
    {
        int iValue = 0;
        Logic lobj = new Logic();
        lobj.printDivisible2and3(30);

    }
}