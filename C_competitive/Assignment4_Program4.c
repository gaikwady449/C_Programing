//Write a program Which accept numbers from user and 
// return its summation of its non facror 
# include <stdio.h>
int NonFactSum(int iNo)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo% iCnt !=0)
        {
            iSum=iSum+iCnt;
          
        }
    }
    return iSum;
    
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number");
    scanf("%d",&iValue);

    iRet = NonFactSum(iValue);

    printf("Summation of non factor is %d\n",iRet);

    return 0;

}