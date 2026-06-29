// Accept Charector from user and check whether it is alphabetical or not (A-Z a-z)
// Input : F
// output : TRUE
// input : &
// output : FALSE
# include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch >= 'A' &&  ch <= 'Z' || ch>='a' && ch<='z')
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
        printf("it is Character");
    }
    else
    {
        printf("it is not a charecter");
    }
    return 0;
}