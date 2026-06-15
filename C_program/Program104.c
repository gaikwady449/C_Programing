# include <stdio.h>
void Display(int *iPtr)
{
    printf("Value of iPtr %d\n",iPtr);


}
int main()
{
    int Arr[5]={10,20,30,40,50};
    Display(Arr);
    printf("Base address of Arr%d\n",Arr);
    return 0;
}

