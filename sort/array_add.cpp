#include <stdio.h>

#define GET_ARRAY_LEN(array,len)    {len = sizeof(array)/sizeof(array[0]);}
void displayArray(int *a,int len)
{
    for(int i = 0;i < len;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[6] = {31,41,59,26,41,58};
    int b[6] = {56,12,23,43,12,43};
    int c[6];
    int count = 0,result[100];
    for(int j = 0;j < 6;j++)
    {
        c[j] = a[j] + b[j];
    }
    
    printf("the a array\n");
    displayArray(a,6);
    printf("the b array\n");
    displayArray(b,6);
    printf("the c array\n");
    displayArray(c,6);
    return 0;
}


