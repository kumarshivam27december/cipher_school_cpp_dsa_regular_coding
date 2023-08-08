#include <stdio.h>
int main()
{
    const int a = 5;
    int *ptr = &a;
    *ptr = 15;
    printf("%d\n",a);
    return 0;
}