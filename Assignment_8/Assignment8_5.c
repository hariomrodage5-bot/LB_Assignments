#include<stdio.h>
double SqftoSqm(double dNo)
{
    double oneSqF = 0.092903;
    double dSqM = 0.0;
    dSqM = oneSqF * dNo;
    return dSqM;
    

}
int main()
{
    double dValue = 0.0;
    double dRet = 0.0;

    printf("Enter the area in square feet : \n");
    scanf("%lf",&dValue);

    dRet = SqftoSqm(dValue);
    printf("The conversion of sqf to sqm is : %lf\n",dRet);

    return 0;
}