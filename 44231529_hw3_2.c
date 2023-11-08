#include <stdio.h>
int main ()
{
    char major;
    printf("Please type your major--->");
    scanf("%c",&major);
    switch (major)
    {
    case 'I'/* constant-expression */:
        printf("Information");/* code */
        break;
    case 'P'/* constant-expression */:
        printf("Production");/* code */
        break;
        case 'S'/* constant-expression */:
        printf("System");/* code */
        break;
    
    default:
        printf("Error");
    }
    return 0;

}