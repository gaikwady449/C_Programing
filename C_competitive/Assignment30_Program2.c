// Accept charecter from user if charecter is small display its capatial
// coorrespondint capital charecter and if it small then dispaly its corresponfing 
// capital . in other cases display as it is 
# include <stdio.h>
void Display( char ch)
{
    if(ch >= 'a' && ch <='z')
    {
        ch=ch-32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}
int main()
{
    char cValue='\0';

    printf("Enter the character");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}
