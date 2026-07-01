# include <stdio.h>

int main()
{
    int i=11;
    int j=21;
    int Temp=0;

    Temp=i;
    i=j;
    j=Temp;

    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",j);
    return 0;


}