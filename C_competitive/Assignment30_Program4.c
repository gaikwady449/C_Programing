// Accept charecter from user and check whether it is wheter it is special or not
// (!,@,#,$,%,^,&,*)
// input : % 
// output : TRUE
// input: d
// Output : FALSE 

# include <stdio.h>
# include<stdbool.h>
# define TRUE 1
# define FALSE 0
typedef bool BOOL;
BOOL ChkSpecial( char ch)
{
    if(ch >='!' && ch <= '/' ||
       ch >= ':' && ch<= '@' ||
       ch >='[' && ch <= '`' ||
       ch >= '{' && ch <= '-')
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
    BOOL bRet = FALSE;
    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("it is Special Charecter:");
    }
    else
    {
         printf("it is not a  Special Charecter:");

    }
    return 0;
}
