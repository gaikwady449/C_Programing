//Accept Number from user if number is less than 10mthan print "Hello"
// Otherwise print "Demo"

# include <stdio.h>

void Display(int iNo)
{
    if(iNo <=10)
    {
        printf("HEllo");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}