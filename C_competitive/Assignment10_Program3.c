// Write a program which accept distanc in kilometer and convert it into meter
// (kilometer = 1000 meter)
# include <stdio.h>
# define PI 3.14
int KMtoMeter(int iNo)
{
    int iMeter=1;
    iMeter=iNo*1000;
    return iMeter;
}
int main()
{
    int iValue=0.0;
    int iRet=0.0;
    printf("Enter the distance ");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf(" distance in meter is    :%d \n",iRet);
    return 0;
}