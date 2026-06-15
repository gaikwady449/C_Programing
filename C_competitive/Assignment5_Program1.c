//Write a program Which accept numbers from user and 
// and print that number of $ and *
# include <stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }

}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;

}