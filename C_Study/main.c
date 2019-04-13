#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int PopSort(int length,int *a);

int main()
{
    int i,length;
    int a[10] = {544,65,34,76,3242,577,234,5757,87,22};

    //printf("Main start\n");
    length = sizeof(a)/sizeof(int);
    printf("length = %d\n",length);
    PopSort(length,a);

    for(i=0;i<length;i++)
    {
        printf("%d ",a[i]);
    }
    //printf("Main over\n");
    return 0;
}




int PopSort(int length,int *a)
{
    int i,j,temp;
    int stamp;
    for(i=0;i<length&&stamp;i++)
    {
        stamp = FALSE;
        for(j=length-1;j>i;j--)
        {
           if(a[j]<a[j-1])
           {
               temp = a[j];
               a[j] = a[j-1];
               a[j-1] = temp;
               stamp = TRUE;
           }
        }
    }

}
