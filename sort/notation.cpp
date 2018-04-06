/*************************************************************************
	> File Name: notation.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月06日 星期五 16时04分53秒
 ************************************************************************/

#include<stdio.h>

long long notation(int n)
{
   return (long long)n*n*n / 1000 - n* n -100 * n + 3;
}

int main()
{
    int n;
    printf("input n\n");
    scanf("%d",&n);
    printf("%lld\n",notation(n));
    return 0;
}
