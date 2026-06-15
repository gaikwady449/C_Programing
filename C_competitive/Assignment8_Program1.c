// Write a program which accept Radius   from user from user and calculate its area 
//Concider the value PI=3.14 (PI*Radius*Radius)

# include <stdio.h>
# define PI 3.14
double RectArea(float Radius)
{
    double Area=0.0;
    Area=PI*Radius*Radius;
    return Area ;  
}
int main()
{
    float fValue=0.0;

    double dRet=0.0;

    printf("Enter a width ");
    scanf("%f",&fValue);



    dRet=RectArea(fValue);
    printf("Area of Rectangle is  %lf",dRet);

   

    return 0;
}