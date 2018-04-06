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
    int len,key,i;
    GET_ARRAY_LEN(a,len);
    for(int j = 1;j < len;j++)
    {
        int key = a[j];
        i = j - 1;
        while(i > -1 && a[i] < key)
        {
            a[i+1] = a[i];
            i = i-1;
        }
        a[i + 1] = key;
    }
    displayArray(a,len);
    return 0;
}


