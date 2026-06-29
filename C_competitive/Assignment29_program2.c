// Accept Charector from user and check whether it is alphabetical or not (A-Z a-z)
// Input : F
// output : TRUE
// input : f
// output : FALSE
# include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch >= 'A' &&  ch <= 'Z' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue='\0';

    BOOL bRet =FALSE;
    printf("Enter the charecter:");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("it is Capital Charecter");
    }
    else
    {
        printf("it is not a Capital charecter");
    }
    return 0;
}