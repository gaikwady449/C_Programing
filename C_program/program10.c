/////////////////////////////////////////////////////////////////////////////
//
// Include Required Header files
// 
/////////////////////////////////////////////////////////////////////////////
# include <stdio.h>

///////// ///////////////////////////////////////////////////////////////////
//
// Funtion Name :  AddTwoNumbers
// Input :         float,float
// Output :        float
// Description :   performs Addition of 2 floats
// Date :          8/5/2026
// Author :        Yash Chandrakant Gaikwad
// 
/////////////////////////////////////////////////////////////////////////////
float AddTwoNumbers(
                        float fNo1,                           // First Input
                        float fNo2                            // Second Input
                   )

{
    float fAns=0.0f;                                          // Variable to store Result
    fAns=fNo1+fNo2 ;                                          // Perform Addition 
    return fAns;
}
/////////////////////////////////////////////////////////////////////////////
// 
//  Application to perform Addition of 2 float Values 
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f;                                      // To store first input
    float fValue2 = 0.0f;                                      // To Store Second input
    float fResult = 0.0f;                                      // To store   Result

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter First Number : \n");
    scanf("%f",&fValue2);
    
    fResult=AddTwoNumbers(fValue1,fValue2);                    


    printf("Addition of Number is  : %f \n",fResult);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
//  input : 10.0  11.0
//  output : 20.0 
//
/////////////////////////////////////////////////////////////////////////////