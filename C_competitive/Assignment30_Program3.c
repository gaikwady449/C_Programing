// Accept charecter from user if it is capital then display all the characters from the input
// charecter till Z . if input charecter is small then print all the charecter in ter reverse order till a,
// in other cases return directly
# include <stdio.h>
void Display( char ch)
{
    char cCnt='\0';
    if(ch >= 'A' && ch <='Z')
    {
        for(cCnt=ch;cCnt<='Z';cCnt++)
        {
            printf("%c",cCnt);
        }
    }
    else if(ch >='a' && ch <= 'z')
    {
        for(cCnt=ch;cCnt<='a';cCnt--)
        {
            printf("%c",cCnt);
        }
    }   
}
int main()
{
    char cValue='\0';

    printf("Enter the character:");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}
