// input 5
// output -5 4 3 2 1 0  

# include <stdio.h>
void Display(int iNO)
{
    int iCnt=0;
    for(iCnt=-iNO;iCnt<=0;iCnt++)
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