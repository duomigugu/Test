#include <stdio.h>
int main ()             // main ALWAYS has to have return type int!!!!!!!!!!
{
    char major;
    printf("Please type your major--->");
    scanf("%c",&major);
    if (major=='I'/* condition */)
    {
        printf("Information");/* code */
    }
    else if (major=='P'/* condition */)
    {
        printf("Production");/* code */
    }
    else if (major=='S'/* condition */)
    {
        printf("System");/* code */
    }
    else{
        printf("Error!\n");
    }
    return 0;       // if main return 0 it means that everything was successful
}