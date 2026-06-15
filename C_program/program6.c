/*
 Algorithm
   Start
        Accept First number as No1
        Accept second number as No2
        Perform Addition of No1 & No2
        Display the Result
   stop
*/
# include <stdio.h>

int main()
{

    float i=0.0f,j=0.0f,k=0.0f;     // variable creation with default value 

    printf("Enter First Number : \n");
    scanf("%f",&i);

    printf("Enter First Number : \n");
    scanf("%f",&j);

    k=i+j;

    printf("Addition of Number is  : %f \n",k);


    return 0;

}