# include <stdio.h>
# include <string.h>
int main()
{
    int iCount=0;
    char *str="Ganesh";
    
    printf("Length of string is %d\n:",strlen(str));
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    printf("LEngth of string is %d\n",iCount);
    
    return 0;
    
}
 