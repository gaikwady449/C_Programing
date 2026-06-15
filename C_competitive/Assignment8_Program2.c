// Write a program which accept width amd height  from user from user and calculate its area 
//Concider the value (Area=Width * height )

# include <stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double Area=0.0;

    Area=fWidth * fHeight;
    Area=fWidth * fHeight;
    
    return Area ;  
}
int main()
{
    float fValue1=0.0;
    float fValue2=0.0;
    double dRet=0.0;

    printf("Enter a width ");
    scanf("%f",&fValue1);

    printf("Enter a Height");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of Rectangle is  %lf",dRet);
    return 0;
}