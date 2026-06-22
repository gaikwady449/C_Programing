# include <stdio.h>
int CountUpadate( char *str)
{

    while(*str != '\0' )
    {
        if(*str == 'L')
        {
            *str='l';
            
        }
        str++;
    }
    
}
int main()
{
    char Arr[50]={'\0'};

    printf("Entre string :\n");
    scanf("%[^'\n]s",Arr); 
    
    CountUpadate(Arr);
    printf("String is :%s\n",Arr);

    return 0;
}
