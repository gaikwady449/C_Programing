// write a program which accept string from user and Check whethwe it 
// contains vowels in it or not 
// input : "Marvellous Multi OS"
// output : 6 (8-2)
# include <stdio.h>
# include <stdbool.h>
# define TRUE 1
# define FALSE 0
typedef bool BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'A' ||
             *str == 'e' || *str == 'E'||
            *str == 'i' || *str == 'I' ||
            *str == 'o' ||*str == 'O'||
             *str == 'u' || *str == 'U')
        {
            return TRUE;
        }    
        str++;
      
    }
    return FALSE;
}
int main()
{
    char arr[20];
    BOOL bRet=FALSE;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    bRet=ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowels");
    }
    else
    {

        printf("There is no  Vowels ");
    }
    return 0;
}