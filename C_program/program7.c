# include <stdio.h>

int main()
{
    float fValue1 = 0.0f;                        // To store first input
    float fValue2 = 0.0f;                        // To Store Second input
    float fResult = 0.0f;                        // To store   Result

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter First Number : \n");
    scanf("%f",&fValue2);

    fResult=fValue1 + fValue2 ;                  // Preform the Addition

    printf("Addition of Number is  : %f \n",fResult);

    return 0;

}