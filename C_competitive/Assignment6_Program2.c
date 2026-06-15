// Write a program which accept number from user
//and print it into word
# include <stdio.h>
void Number(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("one");
    }
    else if (iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("six");
    }
    else if(iNo == 7)
    {
        printf("seaven");
    }
    else if(iNo == 8)
    {
        printf("eight");
    }
    else if(iNo == 9)
    {
        printf("nine");
    }
    else
    {
        printf("invalid Number");
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