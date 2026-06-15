// Write a program which accept number from user and if Number is less than
// 50 print small if it is greater than 50 and less than 100 print mediu 
// if it is greater than 100 then print large

# include <stdio.h>
void Number(int iNo)
{
    if(iNo<50)
    {
        printf("small");
    }
    else if(iNo>50 &&  iNo<100)
    {
        printf("Medium");
    }
    else if (iNo >100)
    {
        printf("Large");
    }
}
int main()
{
    int iValue=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}