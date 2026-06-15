// Write a program which accept temparature in Fahrengeit and conver it into
// celcius (1 celcius =(Fahrenhit -32)*(5/9))

# include <stdio.h>

double FhtoCs(float fTemp)
{
    double dCel=0.0;
    
    dCel=(fTemp - 32)*(5.0/9.0);

    return dCel;

}
int main()
{
    float fValue=0.0f;
    double dRet=0.0;
    printf("Enter a Temprature in Fharenight ");
    scanf("%f",&fValue);


    dRet=FhtoCs(fValue);
    printf(" Celcius is:  %lf\n",dRet);
    return 0;
}