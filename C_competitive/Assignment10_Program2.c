// Write a program which accept Radius of user and calculate the area  

# include <stdio.h>
# define PI 3.14
double RectArea(float fWidth,float fHeight)
{
    double dArea=1;

    dArea=fWidth*fHeight;
    return dArea;
}
int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;
    printf("Enter the width ");
    scanf("%f",&fValue1);
    printf("Enter the height ");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf(" calculate the Area   :%lf \n",dRet);
    return 0;
}