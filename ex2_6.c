#include <stdio.h>
int main()
{
    float w_tax,wo_tax;//w/:with,w/o:without
    printf("Type price w/o vat--->");
    scanf("%f",&wo_tax);
    w_tax=wo_tax*1.10;  
    printf("Price w/ vat %f\n",w_tax); 
    return(0);
}