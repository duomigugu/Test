#include <stdio.h>

int main() 
{
    int i,j;
    double result = 1;
    double denominator=1;
    double numerator=1;

    for (i = 1; i<10000; i++) {
        numerator = 1;
        for (j=0;j<i;j++){
            numerator *= -1;
        }
        denominator = 2*i+1;
        result += numerator/denominator;
    printf("i:%d pi:%.4lf\n",i,4*result);
    }
    return 0;
}