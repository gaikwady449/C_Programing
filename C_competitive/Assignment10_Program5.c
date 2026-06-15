// Write a program which accept area in square feet and convert in into Square meter
// ( 1 Square feet = 0.0929 square meter)
// (kilometer = 1000 meter)
# include <stdio.h>
double SquareMeter(int  iNo)
{
    double dMeter=0;
    dMeter= iNo *0.0929;

    return dMeter;
}
int main()
{
    int iValue=0.0;
    double dRet=0.0;
    printf("Enter area in square feet ");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf(" Area in Squre meter is :%lf \n",dRet);
    return 0;
}