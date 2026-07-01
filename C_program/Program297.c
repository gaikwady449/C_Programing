# include <stdio.h>

// call by value
void Swap(int no1, int no2)
{
    int Temp=0;

    Temp=no1;
    no1=no2;
    no2=Temp;

    Swap(no1,no2);


}
int main()
{
    int i=11;
    int j=21;
    

    Swap(i,j);

    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",j);
    return 0;


}