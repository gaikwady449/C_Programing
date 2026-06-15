// // Accept one Charector From user and conver it that case Charector

# include <stdio.h>
void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue-32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue+32);
    }
}

int main()
{
    char cValue='\0';
    printf("Enter Chracter:");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}