// Write a program which accept area in square feet and conver it into
// into square meter (1 square feet =0.0929 square meter)

# include <stdio.h>

double SquareMeter(int iValue)
{
    double dResult=0.0;
    
    dResult=iValue * 0.0929;

    return dResult;

}
int main()
{
    int iValue=0;
    double dRet=0.0;
    printf("Enter area in squre feet is  ");
    scanf("%d",&iValue);


    dRet=SquareMeter(iValue);
    printf(" Squaremeter is :  %lf\n",dRet);
    return 0;
}