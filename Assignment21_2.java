//write a program to count how many even and odd numbers are preswrnt between 1 and N
class Logic
{
    void countEvenOddRange(int num)
    {
      int iCnt = 0;
      int iEven = 0;
      int iOdd = 0;
      for(iCnt =1;iCnt <= num;iCnt++)
      {
        if(iCnt % 2 ==0)
        {
            iEven++;
            
        }
         if(iCnt % 2 !=0)
        {
            iOdd++;
        
        }
      }
      System.out.println("Even number count is :"+iEven);
      System.out.println("Even number count is :"+iOdd);
    }
}
class Assignment21_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.countEvenOddRange(50);
        

    }
}