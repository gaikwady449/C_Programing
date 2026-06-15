// input 5
// output 1  3 5  

# include <stdio.h>
void Display(int iNO)
{
    int iCnt=0;
    for(iCnt=iNO;iCnt>=1;iCnt--)
    {                   
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}