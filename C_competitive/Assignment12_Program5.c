// Write a progtram which Accept number from user ans
// count frequency of that number which are less than 6
# include <stdio.h>

int CountTwo(int iNo)
{
    int iDigit=0;
    int iSum=0;
    if(iNo < 0)
    {
        iNo=-iNo;

    }
    while(iNo> 0)
    {
        iDigit=iNo%10;
        
        if(iDigit < 6)
        {
            iSum++;
        }

        iNo=iNo/10;
    }
    return iSum;

}
int main()
{
    int iValue=0;
    int iRet=0;
    

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);
    printf("%d",iRet);
    return 0;
}