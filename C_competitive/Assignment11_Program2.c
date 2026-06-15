// write a program which Accept range from user and display all numbers in between that  even number range
// and display  all Even numbers in between
// 22 24   
# include <stdio.h>
int RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;
    int isum=0;
    if("iStart > iEnd")
    {
        printf("Invalid input");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }

    }
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter Sarting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);   

    iRet=RangeDisplayEven(iValue1,iValue2);

    return 0;
}

