// input 5
// output 1  2 3 4 5

# include <stdio.h>
void Display(int iNO)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNO;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue=0;

    printf("Enter number0");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}