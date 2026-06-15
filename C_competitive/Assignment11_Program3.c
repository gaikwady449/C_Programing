// write a program which Accept range from user and display all numbers in between that  even number range
// and display  addition even of all numbers between range 
// 22 24   
# include <stdio.h>
int RangeSum(int iStart,int iEnd)
{
    int iCnt=0;
    int isum=0;
    if("iStart > iEnd")
    {
        printf("Invalid input");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {     
        isum=isum+iCnt;

    }
    return isum;
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter Sarting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);   

    iRet=RangeSum(iValue1,iValue2);
    printf("Addition of all numbers is :%d",iRet);

    return 0;
}

