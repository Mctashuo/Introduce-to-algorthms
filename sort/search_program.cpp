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
    printf("input the value");
    scanf("%d",&key);
    int count = 0,result[100];
    for(int j = 0;j < len;j++)
    {
        if(key == a[j])
        {
           result[count++] = a[j];
        }
    }
    
    printf("there are %d results\n",count);
    displayArray(result,count);
    return 0;
}


