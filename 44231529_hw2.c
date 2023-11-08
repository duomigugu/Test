#include <stdio.h>
#include <math.h>
int main()
{
    float height,r_weight;//r_weight: reasonable weight
    printf("Please type your height in meters--->");
    scanf("%f",&height);
    printf("%3.2f\n",height);//Check the value of height
    r_weight=(pow(height,2))*22;//BMI
    printf("Based on BMI, your r_weight = %3.2f kg\n",r_weight);
    return(0);
}