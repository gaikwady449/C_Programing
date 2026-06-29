// Accept charecter from user and display its ASCII Value in decimal octal and hexadecimal formate
// input : A
// output : Decimal 65
//          octal   0101
//         HExadecimal : 0X41

# include <stdio.h>

void  Display( char ch)
{
    printf("%d\n,0%o\n,0X%X\n",ch,ch,ch);
    
}
int main()
{
    char cValue='\0';
    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;

}
