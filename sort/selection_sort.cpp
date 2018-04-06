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
    int len,key;
    GET_ARRAY_LEN(a,len);
    for(int j = 0;j < len;j++)
    {
        int key = a[j];
        for(int i = j + 1;i < len;i++)
        {
           if(key > a[i])
            {
                key = a[i];
                a[i]= a[j];
                a[j] = key;
            }
            count++;
        }
    }
    displayArray(a,len);
    return 0;
}


