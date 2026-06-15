// input 8
// output 1 2 3 4 5 6 7

# include <stdio.h>
void Display(int iNO)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNO;iCnt=iCnt+1)
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