// Write a program which accept Distance int the kilometer and 
// convert it into meter(1 Kilometer =1000 meter)

# include <stdio.h>

double KMtoMeter(int iNo)
{
    int iMeter=0;

    iMeter=iNo*1000;
    return iMeter;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter a Distance  ");
    scanf("%d",&iValue);


    iRet=KMtoMeter(iValue);
    printf("Distance in meter is :  %d",iRet);
    return 0;
}