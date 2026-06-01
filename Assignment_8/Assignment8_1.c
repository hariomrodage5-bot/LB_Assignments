#include<stdio.h>

double CircleArea(float fRadius)
{
   float pie = 3.14;
    double dAns = 0.0;
    dAns = fRadius *fRadius * pie;
    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;


    printf("Enter the radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is : %lf\n",dRet);


    return 0;
}