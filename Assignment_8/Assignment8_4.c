#include<stdio.h>
double FhtoCs(double dNo)
{
    double dAns = 0.0;
    double OneCelcius =((dNo-32)*5)/9;
    dAns = OneCelcius;
    return dAns;

   
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the tempreature in fahrenheit : \n");
    scanf("%d",&iValue);

    dRet = FhtoCs(iValue);
    printf("The conversion of Fh to Cs is : %lf\n",dRet);

    return 0;
}