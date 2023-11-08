#include <stdio.h>
int main()
{
    int a;
    printf("Type value--->");
    scanf("%d",&a);
    printf("Value is %d.\n",a);
    printf("Value in octal notation is %o.\n""Value in hexadecimal is %x.\n",a,a);
    return(0);
}