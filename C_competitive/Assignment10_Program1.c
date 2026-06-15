// Write a program which accept Radius of user and calculate the area  

# include <stdio.h>
# define PI 3.14
double CircleArea(float fRadius)
{
    double dArea=1;

    dArea=PI * fRadius*fRadius;
   
    return dArea;
}
int main()
{
    float fValue=0;
    double dRet=0;
    printf("Enter the Radius ");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf(" calculate the Area   :%lf \n",dRet);
    return 0;
}