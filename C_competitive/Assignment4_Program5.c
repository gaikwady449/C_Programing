//Write a program Which accept numbers from user and 
// and return Diffrence between summation of all its
// factor and non factor 
# include <stdio.h>
int FactDiff(int iNo)
{
    int iFactSum=0;
    int iSum=0;
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo% iCnt !=0)
        {
            iSum=iSum+iCnt;
          
        }
        else
        {
            iFactSum=iFactSum+iCnt;

        }
    }
    return (iSum-iFactSum); 
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Diffrence is: %d\n",iRet);

    return 0;

}