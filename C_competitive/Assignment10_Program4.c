// Write a program which accept temprature in Fahrenheit and convert it into celcius
// celcius = (1Celcieus=(Fahrenhiit -32)*(5/9))
// (kilometer = 1000 meter)
# include <stdio.h>
double FhtoCs(float iNo)
{
    float fCelc=1;
    fCelc=(iNo -32)*(5.0/9.0);
    return fCelc;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("Enter Temprature ");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf(" in celcius    :%lf \n",dRet);
    return 0;
}